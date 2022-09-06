# Write your MySQL query statement below
SeleCT user_id, max(time_stamp) as last_stamp FROM Logins where time_stamp like '2020%' group BY user_id 