/* Write your PL/SQL query statement below */
WITH DUMMY AS(
SELECT product_id,year ,quantity, price,
RANK () OVER(PARTITION BY product_id ORDER BY year) AS ranking
FROM Sales
)
SELECT product_id,year AS first_year,quantity,price FROM DUMMY
where ranking <2;

