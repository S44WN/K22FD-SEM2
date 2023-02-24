create table product_master
(
    product_no int not null, primary key,
    product_description varchar2(20) not null,
    profit_percent float not null,
    unit_measure INT not null,
    quantity_on_hand int not null,
    sell_price float not null,
    cost_price float not null,
);

-- DESC product_master;

-- generate 10 real life products

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (1, 'Phones', 0.2, 1, 100, 1000, 800);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (2, 'Laptops', 0.3, 1, 100, 2000, 1600);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (3, 'Tablets', 0.2, 1, 100, 500, 400);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (4, 'TVs', 0.2, 1, 100, 1000, 800);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (5, 'Monitors', 0.2, 1, 100, 500, 400);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (6, 'Printers', 0.2, 1, 100, 500, 400);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (7, 'Keyboards', 0.2, 1, 100, 100, 80);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (8, 'Mice', 0.2, 1, 100, 50, 40);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (9, 'Speakers', 0.2, 1, 100, 100, 80);

INSERT INTO product_master (product_no, product_description, profit_percent, unit_measure, quantity_on_hand, sell_price, cost_price)
VALUES (10, 'Headphones', 0.2, 1, 100, 100, 80);


--1
select * from product_master;

--2
select product_description from product_master;

--3
select product_description from product_master where (sell_price > 200 AND sell_price < 500);

--4
select product_description from product_master where (sell_price > 500);

--5
select * from product_master where product_description = 'Headphones' ;

