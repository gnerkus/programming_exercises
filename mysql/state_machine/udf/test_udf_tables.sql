DROP TABLE IF EXISTS digits;

CREATE TABLE digits (
  firstNum INT,
  secondNum INT
);

INSERT INTO digits(firstNum, secondNum)
VALUES
  (1, 2),
  (3, 4);

SELECT firstNum, secondNum, my_add(firstNum, secondNum) FROM digits;