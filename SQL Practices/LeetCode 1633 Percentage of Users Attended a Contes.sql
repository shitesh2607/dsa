-- CREATE TabLE Users(
-- user_id int primary key,
-- user_name varchar(100)
-- );

-- CREATE TabLE Register(
-- user_id int,
-- contest_id int,
-- PRimaRY KEY(contest_id,user_id)
-- );

-- INSERT INTO Users VALUES(
-- 2, 'alex'),
-- (6, 'bob'),
-- (7, 'alic');

-- INSERT INTO Register VALUES
-- (215, 6),
-- (215, 7),
-- (209, 2),
-- (209, 7),
-- (209, 6),
-- (210, 2),
-- (210, 6),
-- (210, 7),
-- (208, 2),
-- (208, 6),
-- (208, 7),
-- (207, 2);

-- ALTER TABLE Register
-- RENAME COLUMN user_id TO contest_id,
-- RENAME COLUMN contest_id TO user_id;
-- SELECT COUNT(user_id) FROM Users;
-- SELECT contest_id,user_id, COUNT(contest_id) FROM Register group by contest_id, user_id;

--Method 1
SELECT contest_id, round(100*(COUNT(contest_id))/(SELECT COUNT(user_id) FROM Users), 2) as percentage FROM Register group by contest_id ORDER BY percentage DESC, contest_id asc ;

--Method 2

select r.contest_id as contest_id, 
    round(100*count(distinct r.user_id)/count(distinct u.user_id), 2) as percentage
from Register r, Users u
group by r.contest_id
order by percentage desc, contest_id







