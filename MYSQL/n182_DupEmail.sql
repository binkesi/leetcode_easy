# https://leetcode-cn.com/problems/duplicate-emails/solution/

SELECT 
    Email
FROM 
    Person
GROUP BY 
    Email
HAVING count(Email) > 1;
 