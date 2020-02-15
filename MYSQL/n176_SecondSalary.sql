# https://leetcode-cn.com/problems/second-highest-salary/

SELECT
    IFNULL(
    (SELECT DISTINCT Salary
    FROM Employee
    ORDER BY Salary DESC
    LIMIT 1 OFFSET 1),
    NULL) as SecondHighestSalary;