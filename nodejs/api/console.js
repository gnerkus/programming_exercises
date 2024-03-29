const { Console } = require('console');
const fs = require('fs');
const path = require('path');

// Prints error message and stack trace to stderr
console.error(new Error('test error log'));
// Prints message to stderr
console.warn('test warn log');

const output = fs.createWriteStream(path.join(__dirname, '/stdout.log'), { flags: 'a' });
const errorOutput = fs.createWriteStream(path.join(__dirname, '/stderr.log'), { flags: 'a' });
// Custom simple logger
const logger = new Console({ stdout: output, stderr: errorOutput });
// use it like console
const count = 5;
logger.log('count: %d', count);
// In stdout.log: count 5

output.end();
errorOutput.end();

/**
 * Assert
 */
logger.assert(false, 'Whoops %s work', 'did not');

