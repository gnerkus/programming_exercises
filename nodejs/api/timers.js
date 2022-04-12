/**
 * ESM
 * 
 * If run as is, raises the error:
 * 
 (node:81903) Warning: To load an ES module, set "type": "module" in the package.json or use the .mjs extension.
(Use `node --trace-warnings ...` to show where the warning was created)
import { setTimeout as setTimeoutPromise } from 'timers/promises';
^^^^^^

SyntaxError: Cannot use import statement outside a module

The script was run with `node timers.js`
 */
// import { setTimeout as setTimeoutPromise } from 'timers/promises';

/**
 * Introduced in v15 of Node
 * 
 * Running this from any version lower than 15 throws a 'MODULE_NOT_FOUND' error
 */
const { setTimeout: setTimeoutPromise } = require('timers/promises');

setTimeoutPromise(100, Date.now()).then((res) => {
  // do something with res
});

// There's a millisecond between the function calls

async function testTimeout(milliDelay, options) {
  const timerName = `test_promise ${milliDelay}`;
  console.time(timerName);
  let timeoutPromise;
  try {
    timeoutPromise = await setTimeoutPromise(milliDelay, Date.now(), options);
  } catch (error) {
    if (error.name === 'AbortError')
      console.log('The timer was aborted');
  }

  console.timeEnd(timerName);
  console.log(`Current timestamp: ${timeoutPromise}`);
}

testTimeout(100, {});
/**
 * Sets timeout duration to 1
 * Displays a TimeoutOverflowWarning:
 * 
 9007199254740991 does not fit into a 32-bit signed integer.
Timeout duration was set to 1.

Actual timing seems to fall between 4 and 10 milliseconds
 */
testTimeout(Number.MAX_SAFE_INTEGER, {});

/**
 * Abort
 * 
 * This occurs before other calls
 */
const ac = new AbortController();
const signal = ac.signal;

testTimeout(6000, { signal });

ac.abort();

/**
 * USE?
 * 
 * Timing out a long-running promise
 * 
 * First part is the implementation without 'timers/promise'
 */

const mockPromise = new Promise(function(resolve) {
  setTimeout(() => {
    resolve('Resolved in 1 second')
  }, 1000);
});

function abortWithRace(mockPromise) {
  console.log('...ABORT WITH RACE');
  const timeoutPromise = new Promise((resolve, reject) => {
    setTimeout(() => {
      reject('Promise was timed out because it took too long')
    }, 500);
  });
  
  Promise.race([mockPromise, timeoutPromise]).then((res) => {
    console.log(res)
  }).catch((error) => {
    console.log(error);
  });
}

abortWithRace(mockPromise);

/**
 * Second part aborts the promise after a time period has elasped
 */
const abortController = new AbortController();
setTimeout(() => abortController.abort(), 500);

async function abortWithController(ac) {
  console.log('...ABORT WITH CONTROLLER')
  try {
    await setTimeoutPromise(1000, 'Resolved in 1 second', { signal: ac.signal });
  } catch (error) {
    if (error.name === 'AbortError')
        console.log('Promise was aborted after 500ms');
  }
}

abortWithController(abortController);


/**
 * EXAMPLE OUTPUT;
 * 
[api] node timers.js                                  nodejs-api-study-01  ✱

(node:87034) TimeoutOverflowWarning: 9007199254740991 does not fit into a 32-bit signed integer.
Timeout duration was set to 1.
(Use `node --trace-warnings ...` to show where the warning was created)
The timer was aborted
test_promise 6000: 7.919ms
Current timestamp: undefined
test_promise 9007199254740991: 9.051ms
Current timestamp: 1636382728057
test_promise 100: 100.594ms
Current timestamp: 1636382728057
 */
