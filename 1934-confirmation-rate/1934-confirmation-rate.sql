# Write your MySQL query statement below
SELECT s.user_id,round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate FROM Signups s LEFT JOIN Confirmations c ON s.user_id=c.user_id
GROUP BY c.user_id;