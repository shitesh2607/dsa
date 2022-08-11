-- https://leetcode.com/problems/second-highest-salary/
# Write your MySQL query statement below
SELeCT MAX(salary) AS SecondHighestSalary FROM Employee WHERE salary <(SELeCT MAX(salary) FROM Employee)