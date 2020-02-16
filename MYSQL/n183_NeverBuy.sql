# https://leetcode-cn.com/problems/customers-who-never-order/

SELECT 
    Customers.name as "Customers"
FROM 
    Customers    
WHERE
    Customers.id not in
    (
    SELECT
        CustomerId 
    FROM
        Orders
    );


select
    Customers.Name as "Customers"
from
    Customers
left join 
    Orders as b
on 
    Customers.Id = b.CustomerId
where
    b.CustomerId is null;

