/* Write your PL/SQL query statement below */
-- WITH dummy AS(
--     SELECT d.name AS Department,e.name as Employee,e.salary as Salary,
-- DENSE_RANK() OVER(PARTITION BY d.id ORDER BY e.salary DESC) AS RANK
-- FROM employee e JOIN  Department d ON e.departmentId=d.id
-- )

SELECT Department,Employee,Salary
FROM (
    SELECT d.name AS Department,e.name as Employee,e.salary as Salary,
DENSE_RANK() OVER(PARTITION BY d.id ORDER BY e.salary DESC) AS RANK
FROM employee e JOIN  Department d ON e.departmentId=d.id
)
WHERE rank<4;