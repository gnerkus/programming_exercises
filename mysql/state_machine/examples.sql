DROP TABLE IF EXISTS examples;
CREATE TEMPORARY TABLE examples(state VARCHAR(50), event VARCHAR(50));

INSERT INTO examples(state, event)
VALUES
  ('start', 'create'),
  ('awaiting_payment', 'pay'),
  ('awaiting_payment', 'cancel'),
  ('awaiting_payment', 'ship');

SELECT state, event, order_events_transition(state, event) from examples;

/*
bash

+------------------+--------+---------------------------------------+
| state            | event  | order_events_transition(state, event) |
+------------------+--------+---------------------------------------+
| start            | create | awaiting_payment                      |
| awaiting_payment | pay    | awaiting_shipment                     |
| awaiting_payment | cancel | canceled                              |
| awaiting_payment | ship   | error                                 |
+------------------+--------+---------------------------------------+
4 rows in set (0.00 sec)
*/