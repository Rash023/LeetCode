# Write your MySQL query statement below
select product_name,year,price from Sales as s,Product as p where s.product_id=p.product_id