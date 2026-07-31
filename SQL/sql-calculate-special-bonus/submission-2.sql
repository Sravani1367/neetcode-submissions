-- Write your query below
--select employee_id,
--case
 --  when employee_id %2 <> 0 and name not like 'M%' THEN salary
 --  else 0
 --  end as bonus
--from employees;  
SELECT employee_id,
       CASE
           WHEN employee_id % 2 <> 0
                AND name NOT LIKE 'M%'
           THEN salary
           ELSE 0
       END AS bonus
FROM Employees
order by employee_id; 

   