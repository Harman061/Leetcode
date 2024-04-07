# Write your MySQL query statement below
SELECT prices.product_id,ifnull( round(sum(units*price)/sum(units),2),0) as average_price
FROM PRICES
left join UNITSSOLD
on prices.product_id=unitssold.product_id
and unitssold.purchase_date BETWEEN start_date AND end_date
group by product_id;