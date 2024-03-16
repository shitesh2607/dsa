-- Method 1
SELECT * FROM my_numbers GrOUP BY num HAVING COUNT(num) = 1 Order by num desc LIMIT 1;

-- method 2
select max(num) as num from (select num from my_numbers group by num having count(num) = 1);

-- MEthod 3
-- CREATING variable
WITH num_count as (SELECT num from my_numbers group by num having COUNT(x) =1)
SElect CASE WHEN COUNT(*)>0 Then max(num)  ELSE NULL end as num FROM num_count


