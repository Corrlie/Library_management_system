use Library

-- Categories
INSERT INTO Categories(category) VALUES
('Biography'),
('Crime'),
('Fiction'),
('Health'),
('Sport'),
('Travel')

-- Readers
INSERT INTO Readers(lastName, firstName, dateOfBirth, dateOfJoining, phoneNumber) values
('Azaro', 'Grace', '2001-09-12', '2021-02-01', '134886999'),
('Kowalski', 'John', '1992-05-02', '2021-05-16', '692485269'),
('Corn', 'Jake', '1994-01-23', '2020-01-20', '124864972'),
('Kapa', 'George', '1986-02-24', '2019-10-28', '194679255'),
('Zalo', 'Tracy', '1990-04-02', '2020-10-15', '217954365'),
('Kubi', 'Janet', '1995-11-25', '2021-05-20', '957684153'),
('Rando', 'Hannah', '1989-01-21', '2020-11-02', '554266992'),
('Gan', 'Matt', '1994-10-05', '2020-04-28', '251789688'),
('Trace', 'William', '1999-01-25', '2021-01-25', '119986548'),
('Anda', 'Stacy', '1997-09-24', '2020-06-15', '997645359')

-- Employees
INSERT INTO Employees(lastName, firstName, dateOfBirth, dateOfEmployment) values
('Makar','Andrew', '1985-01-05', '2018-06-03'),
('Zarad','Rose', '1980-09-12', '2019-07-20'),
('Rain','Lily', '1990-11-24', '2020-08-21'),
('Karsk', 'Justin', '1987-01-25', '2021-04-01'),
('Jurek', 'Celine', '1995-12-02', '2021-01-05')

-- Branches
INSERT INTO Branches(city, postCode, address) values
('London', '00-110', 'Green Street 5'),
('London', '00-110', 'Sea Street 2'),
('Toronto', '81-000', 'Grass Boulevard 59')
