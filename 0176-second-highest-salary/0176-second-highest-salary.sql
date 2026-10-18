# Write your MySQL query statement below
#LIMIT 1, 2
#SELECT salary as SecondHighestSalary from Employee ORDER BY salary DESC LIMIT 1, 1; incorrect since it must be output null too!
SELECT(SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1, 1) as SecondHighestSalary; 