DELIMITER $$
DROP FUNCTION IF EXISTS `order_events_transition`$$
CREATE FUNCTION `order_events_transition`(state VARCHAR(50),event VARCHAR(50)) RETURNS VARCHAR(50)
-- DETERMINISTIC

  BEGIN
    DECLARE nextState VARCHAR(20);

      IF state <=> "start" THEN
        IF event <=> "create" THEN
          RETURN "awaiting_payment";
        ELSE
          RETURN "error";
        END IF;
      ELSEIF state <=> "awaiting_payment" THEN
        IF event <=> "pay" THEN
          RETURN "awaiting_shipment";
        ELSEIF event <=> "cancel" THEN
          RETURN "canceled";
        ELSE
          RETURN "error";
        END IF;
      ELSEIF state <=> "awaiting_shipment" THEN
        IF event <=> "cancel" THEN
          RETURN "awaiting_refund";
        ELSEIF event <=> "ship" THEN
          RETURN "shipped";
        ELSE
          RETURN "error";
        END IF;
      ELSEIF state <=> "awaiting_refund" THEN
        IF event <=> "refund" THEN
          RETURN "canceled";
        ELSE
          RETURN "error";
        END IF;
      END IF;
  END$$
DELIMITER ;
