/* Write your PL/SQL query statement below */
SELECT TO_CHAR(activity_date,'YYYY-MM-DD') AS day,COUNT(DISTINCT user_id)active_users
FROM ACTIVITY
WHERE activity_date>'2019-06-27' AND activity_date<='2019-07-27'
GROUP BY activity_date;
