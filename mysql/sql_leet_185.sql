# Write your MySQL query statement below
# gaps are given so beginner's doesn't get stressed after first glance , take u'r time beginner

select d.name as Department , e.name as Employee , e.salary as Salary 

from Employee as e 

join Department as d on d.id = e.departmentId 

where e.salary >=

ifnull((select distinct e2.salary from Employee e2

where e2.departmentId = e.departmentId 

order by e2.salary desc limit 1 offset 2

 ),0);

