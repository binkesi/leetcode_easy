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

