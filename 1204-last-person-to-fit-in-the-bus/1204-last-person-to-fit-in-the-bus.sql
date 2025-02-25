# Write your MySQL query statement below
WITH CTE AS
(
SELECT *,
SUM(weight) OVER(ORDER BY turn) AS Total_Weight
FROM Queue)
SELECT person_name FROM CTE 
WHERE Total_weight<= 1000
ORDER BY Total_Weight DESC
LIMIT 1;