create table sale_master
(
    salesman_no int not null primary key,
    name varcahr2(30) not NULL,
    address varchar2(30) not null,
    city varchar2(30),
    state varchar2(30),
    zip int not null,
    sale_amount float not null,
    target_to_get int DEFAULT '0',
    -- yesterday_sales unique not NULL,
    remarks varchar2(30)
);

-- drop constraints one by one
alter table sale_master drop constraint sale_master_pk;

