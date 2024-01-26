# Write your MySQL query statement below
SELECT Product.product_name, Sales.year, Sales.price
FROM Product
RIGHT JOIN Sales
USING (Product_id);