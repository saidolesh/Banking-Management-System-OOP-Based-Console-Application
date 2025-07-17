
INSERT INTO users (email, password) VALUES ('user@example.com', 'password123');

INSERT INTO accounts (account_number, holder_name, balance, account_type)
VALUES (1001, 'Alice', 1000.0, 'Savings');

INSERT INTO transactions (account_number, amount, type)
VALUES (1001, 1000.0, 'deposit');
