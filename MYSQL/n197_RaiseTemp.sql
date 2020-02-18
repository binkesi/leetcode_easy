# https://leetcode-cn.com/problems/rising-temperature/submissions/ 

select b.Id 
from Weather as a,
    Weather as b
where datediff(b.RecordDate, a.RecordDate) = 1
and b.Temperature > a.Temperature;