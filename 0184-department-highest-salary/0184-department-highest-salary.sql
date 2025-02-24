/* Write your PL/SQL query statement below */

-- WITH cte AS(
-- SELECT e.id,e.name AS Employee,e.salary AS Salary,e.departmentId,d.name AS Department,
-- MAX(e.salary) OVER(PARTITION BY d.name)AS mx_salary
-- FROM Employee e JOIN Department d
-- ON e.departmentId=d.id
-- WHERE e.salary IS NOT NULL
-- )
-- SELECT Department,Employee,Salary FROM cte WHERE salary=mx_salary;
WITH cte AS(
SELECT e.name AS Employee,e.salary AS Salary,d.name AS Department,
RANK() OVER(PARTITION BY d.name ORDER BY e.salary DESC)AS rank
FROM Employee e JOIN Department d
ON e.departmentId=d.id)
SELECT Department,Employee,Salary FROM cte WHERE rank=1;