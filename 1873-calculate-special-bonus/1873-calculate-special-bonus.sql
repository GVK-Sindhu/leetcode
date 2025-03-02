/* Write your PL/SQL query statement below */
SELECT employee_id,
    CASE
        WHEN MOD(employee_id,2)=0 THEN 0
        WHEN MOD(employee_id,2)=1 AND name LIKE 'M%' THEN 0
        WHEN MOD(employee_id,2)=1 THEN salary
        END AS bonus
FROM Employees;