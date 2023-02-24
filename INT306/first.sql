create table client_master 
(
    client_no int not null, primary key,
    client_name varchar2(20) not null,
    address1 varchar2(20) not null,
    address2 varchar2(20) not null,
    city varchar2(20) not null,
    state varchar2(20) not null,
    zip varchar2(20) not null,
    balance_due int not null,
);

-- DESC client_master;

-- gereate 10 real life clients

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (1, 'ABC Corporation', '123 Main Street', 'Apt 1', 'Mumbai', 'Maharashtra', '400001', 10000);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (2, 'XYZ Enterprises', '456 Elm Street', 'Suite 2', 'New Delhi', 'Delhi', '110001', 5000);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (3, 'PQR Industries', '789 Oak Street', 'Unit 3', 'Bangalore', 'Karnataka', '560001', 7500);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (4, 'LMN Corporation', '1011 Pine Street', 'Floor 4', 'Chennai', 'Tamil Nadu', '600001', 12000);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (5, 'JKL Enterprises', '1213 Maple Street', 'Room 5', 'Hyderabad', 'Telangana', '500001', 8000);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (6, 'RST Industries', '1415 Cedar Street', 'Suite 6', 'Kolkata', 'West Bengal', '700001', 9500);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (7, 'OPQ Corporation', '1617 Oak Street', 'Unit 7', 'Ahmedabad', 'Gujarat', '380001', 11000);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (8, 'EFG Enterprises', '1819 Maple Street', 'Floor 8', 'Jaipur', 'Rajasthan', '302001', 6000);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (9, 'UVW Industries', '2021 Cedar Street', 'Room 9', 'Pune', 'Maharashtra', '411001', 8500);

INSERT INTO client_master (client_no, client_name, address1, address2, city, state, zip, balance_due)
VALUES (10, 'GHI Corporation', '2223 Pine Street', 'Suite 10', 'Lucknow', 'Uttar Pradesh', '226001', 7000);

-- find name of all clients
select cliient_name from client_master;

-- find name and cities of all clients
select client_name, city from client_master;

-- find name and cities of all clients who live in Mumbai
select client_name, city from client_master where city = 'Mumbai';

-- find name and cities of all clients who live in Mumbai or Delhi
select client_name, city from client_master where city = 'Mumbai' or city = 'Delhi';    

-- find name and cities of all clients who live in Mumbai or Delhi or Bangalore
select client_name, city from client_master where city = 'Mumbai' or city = 'Delhi' or city = 'Bangalore';

-- display detain of all clients 1 and 2
select * from client_master where client_no = 1 or client_no = 2;


