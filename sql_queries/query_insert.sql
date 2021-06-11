use Library_database

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



-- Books
INSERT INTO Books(title, authorFirstName, authorLastName, yearOfPublication, bookCode, idCategory) values
('The Duke', 'Ian',  'Lloyd', 2001, 'B001', 1),
('Becoming', 'Michelle',  'Obama', 2011, 'B002', 1),
('Overshare', 'Rose',  'Dix', 2015, 'B003', 1),
('I Am Malala', 'Malala',  'Yousafzai', 2017, 'B004', 1),


('1984', 'Goerge',  'Orwell', 2002, 'C001',2),
('Mindhunter', 'John',  'Douglas', 2013, 'C002',2),
('The Ratline', 'Philippe',  'Sands', 2010, 'C003',2),
('The Godfather', 'Mario',  'Puzo', 2004, 'C004',2),


('The Witcher', 'Andrzej',  'Sapkowski', 2000, 'F001', 3),
('It', 'Stephen',  'King', 1999, 'F002', 3),

('Fully Human', 'Steve',  'Biddulph', 2010, 'H001',4),
('Chatter', 'Ethan',  'Kross', 2019, 'H002',4),


('The Mamba Mentality', 'Kobe',  'Bryant', 2004, 'S001', 5),
('Five Lessons', 'Ben',  'Hogan', 2011, 'S002', 5),

('Into the Wild', 'Joh',  'Krakauer', 2011, 'T001', 6)

-- employments
INSERT INTO Employments(idEmployee, idBranch) values
(1,1),
(2,1),
(3,2),
(4,2),
(5,3)

-- catalogue
INSERT INTO Catalogue(idBook, idBranch) values
(1,1),
(2,1),
(3,1),
(4,2),
(5,2),
(6,3),
(7,3),
(8,1),
(9,2),
(10,3),
(11,1),
(12,2),
(13,3),
(14,3),
(15,1)


-- rentals
INSERT INTO Rentals(idReader, idCatalogue) values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(6,6),
(6,7)

