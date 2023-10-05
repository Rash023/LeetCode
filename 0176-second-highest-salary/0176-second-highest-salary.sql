# Write your MySQL query statement below

select max(a.salary) as SecondHighestSalary from Employee a join Employee b where a.salary<b.salary;