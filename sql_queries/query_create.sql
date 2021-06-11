----------------------- 1st step:
-- CREATE DATABASE Library_database

----------------------- 2nd step:
USE Library_database

-- Readers
CREATE TABLE Readers(
	id int primary key not null identity(1,1),
	lastName nvarchar(50) not null,
	firstName nvarchar(50) not null,
	dateOfBirth date not null,
	dateOfJoining date not null,
	phoneNumber nvarchar(15) not null
)

-- Categories
CREATE TABLE Categories(
	id int primary key not null identity(1,1),
	category nvarchar(20) not null
)

-- Workers
CREATE TABLE Employees(
	id int primary key not null identity(1,1),
	lastName nvarchar(50) not null,
	firstName nvarchar(50) not null,
	dateOfBirth date not null,
	dateOfEmployment date not null,
)

-- Library Branches
CREATE TABLE Branches(
	id int primary key not null identity(1,1),
	city nvarchar(25) not null,
	postCode nvarchar(10) not null,
	address nvarchar(50) not null
)

-------------------- relations

-- Books
CREATE TABLE Books(
	id int primary key not null identity(1,1),
	title nvarchar(50) not null,
	authorFirstName nvarchar(50) not null,
	authorLastName nvarchar(50) not null, 
	yearOfPublication int,
	bookCode nvarchar(10) not null UNIQUE,
	idCategory int FOREIGN KEY REFERENCES Categories(id),
)

-- employments 
CREATE TABLE Employments(
	id int primary key not null identity(1,1),
	idEmployee int FOREIGN KEY REFERENCES Employees(id),
	idBranch int FOREIGN KEY REFERENCES Branches(id)
)

-- catalogue
CREATE TABLE Catalogue(
	id int primary key not null identity(1,1),
	idBook int FOREIGN KEY REFERENCES Books(id) UNIQUE,
	idBranch int FOREIGN KEY REFERENCES Branches(id),
	isBorrowed nvarchar(20)
)

-- rentals
CREATE TABLE Rentals(
	id int primary key not null identity(1,1),
	idReader int FOREIGN KEY REFERENCES Readers(id),
	idCatalogue int FOREIGN KEY REFERENCES Catalogue(id) UNIQUE
)
