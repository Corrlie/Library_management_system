use Library

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

