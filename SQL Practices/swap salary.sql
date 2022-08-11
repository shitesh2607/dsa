-- https://leetcode.com/problems/swap-salary/

-- Method 1
UPDATE Salary SET sex = If(sex='f', 'm', 'f')

-- method 2
UPDATE Salary SET sex = CASE WHEN sex = 'f' THEN 'm' ELSE 'f' END