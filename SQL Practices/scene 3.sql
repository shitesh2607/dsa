-------------------------------------------------------------------------
-- Table and Insert SQL Script :
-------------------------------------------------------------------------
-- CREATE TABLE Emp(
-- group1 varchar(20),
-- Sequence  int );

-- INSERT INTO Emp VALUES('A',1);
-- INSERT INTO Emp VALUES('A',2);
-- INSERT INTO Emp VALUES('A',3);
-- INSERT INTO Emp VALUES('A',5);
-- INSERT INTO Emp VALUES('A',6);
-- INSERT INTO Emp VALUES('A',8);
-- INSERT INTO Emp VALUES('A',9);
-- INSERT INTO Emp VALUES('B',11);
-- INSERT INTO Emp VALUES('C',1);
-- INSERT INTO Emp VALUES('C',2);
-- INSERT INTO Emp VALUES('C',3);

-- Problem Statement : Write a SQL query to find the maximum and minimum values of continuous ‘Sequence’ in each ‘Group’

SELECt MIN(Sequence) group1 from Emp GrouP bY group1;