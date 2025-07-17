
CREATE DATABASE IF NOT EXISTS bankdb;
USE bankdb;

CREATE TABLE IF NOT EXISTS users (
    user_id INT AUTO_INCREMENT PRIMARY KEY,
    email VARCHAR(100) NOT NULL UNIQUE,
    password VARCHAR(100) NOT NULL
);

CREATE TABLE IF NOT EXISTS accounts (
    account_number INT PRIMARY KEY,
    holder_name VARCHAR(100),
    balance DOUBLE,
    account_type VARCHAR(20)
);

CREATE TABLE IF NOT EXISTS transactions (
    trans_id INT AUTO_INCREMENT PRIMARY KEY,
    account_number INT,
    amount DOUBLE,
    type VARCHAR(10),
    trans_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
