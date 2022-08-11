-- Problem Statement:-
-- Transatcion_tbl Table has four columns CustID, TranID, TranAmt, and  TranDate. User has to display all these fields along with maximum TranAmt for each CustID and ratio of TranAmt and maximum TranAmt for each transaction.
-- CREATE TABLE Transaction_Tbl(
--  CustID int ,
--  TranID int ,
--  TranAmt float ,
--  TranDate date
-- )
-- INSERT INTO Transaction_Tbl (CustID, TranID, TranAmt, TranDate) VALUES (1001, 20001, 10000, CAST('2020-04-25' AS Date));
-- INSERT INTO Transaction_Tbl (CustID, TranID, TranAmt, TranDate) VALUES (1001, 20001, 10000, CAST('2020-04-25' AS Date));
-- INSERT INTO Transaction_Tbl (CustID, TranID, TranAmt, TranDate) VALUES (1001, 20004, 20000, CAST('2020-04-25' AS Date));
-- INSERT INTO Transaction_Tbl (CustID, TranID, TranAmt, TranDate) VALUES (1002, 20001, 10000, CAST('2020-04-25' AS Date));
-- INSERT INTO Transaction_Tbl (CustID, TranID, TranAmt, TranDate) VALUES (1002, 30001, 7000, CAST('2020-04-25' AS Date));
-- INSERT INTO Transaction_Tbl (CustID, TranID, TranAmt, TranDate) VALUES (1002, 30003, 22000, CAST('2020-04-25' AS Date));

SELECT CustId, MAX(TranAmt) AS maxTranAmt from Transaction_Tbl group by CustID;
