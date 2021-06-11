use Library_database

select * from Catalogue as cat
left join Rentals as r ON r.idCatalogue = cat.id

-- available
select cat.idBook from Catalogue as cat
left join Rentals as r ON r.idCatalogue = cat.id
WHERE r.idReader is null -- if there's no reader -> it's not in borrowed, so it's available

-- borrowed
select * from Catalogue as cat
left join Rentals as r ON r.idCatalogue = cat.id
WHERE r.idReader is not null

-- update borrowed/available
update Catalogue
set Catalogue.isBorrowed = 'Borrowed'
FROM Catalogue
LEFT JOIN Rentals ON Rentals.idCatalogue = Catalogue.id
WHERE Rentals.idReader is not null

update Catalogue
set Catalogue.isBorrowed = 'Available'
FROM Catalogue
LEFT JOIN Rentals ON Rentals.idCatalogue = Catalogue.id
WHERE Rentals.idReader is null


