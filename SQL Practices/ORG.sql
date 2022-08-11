-- CREATE DATABASE ORG;
-- SHOW DATABASES;
-- USE ORG;
-- CREATE TABLE worker(
-- worker_id INT NOT NULL PRImaRY KEY auto_increment,
-- first_name varchar(100),
-- last_name varchar(100),
-- salary INT(10),
-- joining_date datetime,
-- Department varchar(100)
-- );

-- INSERT INTO worker VALUES
-- (001, 'hitesh', 'gupta', 100, '13-12-20 09:00:00', 'HR'),
-- (002, 'Faraz', 'gupta', 600, '13-12-20 09:00:00', 'COMP'),
-- (003, 'shreyas', 'gupta', 50, '13-12-20 09:00:00', 'CIVIL'),
-- (004, 'prashant', 'gupta', 600, '13-12-20 09:00:00', 'IT'),
-- (005, 'suyog', 'gupta', 700, '13-12-20 09:00:00', 'EXLI'),
-- (006, 'avinash', 'gupta', 200, '13-12-20 09:00:00', 'TATA'),
-- (007, 'mahesh', 'gupta', 500, '13-12-20 09:00:00', 'MVRworker_id');

-- select * FROM worker

-- CREATE TABLE Bonus(
-- worker_ref_id INT(20),
-- bonus_amt INT(10),
-- bonus_data datetime,
-- foreign key(worker_ref_id)
-- references worker(worker_id)
-- ON delete CASCADE
-- );

-- INSERT INTO Bonus VALues
-- (001, 233, '20-12-23'),
-- (002, 235, '20-12-23'),
-- (003, 125, '20-12-23'),
-- (004, 885, '20-12-23');

-- CREATE TABLE title(
-- worker_ref_id INT,
-- worker_title VARCHAR(100),
-- affected_from datetime,
-- foreign key(worker_ref_id)
-- references worker(worker_id)
-- on delete cascade);

-- INSErT INTO title VALUES
-- (001, 'DM', '12-11-23'),
-- (002, 'PM', '01-01-23'),
-- (003, 'CM', '12-12-23'),
-- (004, 'AM', '23-07-23'),
-- (005, 'SDM', '12-12-23');

-- SELECT first_name, salary from worker;

-- SELECT 23+23;
-- SELEct ucase('dfsd');
-- SELECt lcase('AAAA');

-- SELECT * fROM worker where first_name='faraz'
-- SELECT * FROM worker WHERE salary BETWEEN 100 AND 300;
-- SELECT *  from worker order by salary asc;
-- SELECT distinct salary,first_name from worker;
-- SELECT Department, count(Department) from worker GROUP BY Department; 
-- Avg salary per department
-- SELECT Department, avg(salary) from worker group bY Department;
-- minIMUM salary
-- select Department, MIN(salary)  from worker GrOUP BY Department; 
-- select Department, SUM(salary)  from worker GrOUP BY Department; 
-- GROUP BY having
 
--  SELECT Department, count(Department) from worker GROUP BY Department having COUNT(Department)<=1;
-- Default
-- CREATE TABLE account(
-- id INT primary KEY,
-- name VArCHAr(255),
-- balance INT NOT NULL default 0
-- );

-- INSERT INTO account(id, name) value
-- (2, 'hitesh');

-- SELECT * FROM account;

-- Add new Column
-- ALTER TABLE account ADD intrest FLoAt NOT NULL default 0;
-- SELECT * FROM account
-- modyfy
-- ALTER TABLE account modify intrest DOUBLE NOT NULL default 0;
-- DESc account;

-- Change Column
-- ALTer TABLE account change Column intrest saving_intrest DouBLE NOT NULL default 0;
-- DESC account;
---- drop Column
-- ALTER TABLE account DRop COLUMN saving_intrest;

-- DESC account;
-- SELECT * FROM worker;
-- REPLACE INTO worker(worker_id, first_name) VALUES(001, 'HARRY');