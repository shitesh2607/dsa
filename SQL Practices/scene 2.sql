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

-- SELECT CustId, MAX(TranAmt) AS maxTranAmt from Transaction_Tbl group by CustID;
-- CREATE TABLE EMPTABLE(
--  ID int primary KEY,
--  ManID int ,
--  empName varchar(200) ,
--  salary int
-- );

-- CREATE TABLE sales(
-- salesId int,
-- price int,
-- productId int,
-- yeear int,
-- quantity int,
-- primary key(salesId, yeear)
-- );
-- INSERT INTO sales values(1, 5000, 100, 2008, 10);
-- INSERT INTO sales values(2, 5000, 100, 2009, 12);
-- INSERT INTO sales values(3, 9000, 200, 2011, 15);

-- CREATE TABLE product(
-- productId int,
-- productName varchar(100)
-- );

-- INSERT INTO product values(100, 'Nokia');
-- INSERT INTO product values(200, 'Apple');
-- INSERT INTO product values(300, 'Samsung');

-- CREATE TABLE grade(
-- grade varchar(100),
-- marks int
-- );

-- CREATE TABLE students(
-- rollno int,
-- stdname varchar(100),
-- marks int
-- );

-- INSERT INTO  grade values ('A+', 90);
-- INSERT INTO  grade values('A',80);
-- INSERT INTO  grade values('B',70);
-- INSERT INTO  grade values('C',60);

-- INSERT INTO students values(1, 'S', 86);
-- INSERT INTO students values(2, 'a', 78);
-- INSERT INTO students values(3, 'h', 64);
-- INSERT INTO students values(4, 'j', 68);
-- INSERT INTO students values(5, 'd', 72);
-- INSERT INTO students values(6, 'jk', 99);
-- name marks grade
select 


