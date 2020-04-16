# https://leetcode-cn.com/problems/classes-more-than-5-students/
SELECT 
    class
FROM
    courses
GROUP by class
HAVING COUNT(distinct student) >= 5
;