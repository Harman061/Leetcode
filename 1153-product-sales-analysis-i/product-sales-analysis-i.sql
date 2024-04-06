SELECT product.product_name, sales.year, sales.price
From sales
Left join product 
on sales.product_id=product.product_id;