# Library_management_system

## Intoduction
It is the project of exemplary Library Management System. The project connects Graphical User Interface written in C++ using Qt with SQL relational database (SQL Server Managemenst Studio).

## Technologies used:
C++, Qt, SQL

## Description
The project consists of two general parts, which are in seperate directories.
- First part - connected with database creation in SQL. SQL scripts are saved in sql_queries directory. They were made using Microsoft SQL Server Management Studio. 
- Second part - connected with GUI creation. GUI project is saved in qt_gui directory. It is written in C++ using Qt.

## Preparation of database
In the sql_queries directory there are three files - first - responsible for creating the database and tables ("**query_create.sql**" file), second - for inserting exemplary values into tables ("**query_insert.sql**" file) and third - for updating table values on specific condition ("**query_update_select.sql**" file). In order to make ready database, execute these files in sequence mentioned above.

## Running the program
If the database is already prepared, run the qt-part project from qt_gui directory. After hitting "Run" the window presented below is shown.


![1a_notConn](https://user-images.githubusercontent.com/63510085/121808776-69422e80-cc5a-11eb-98c7-35e613cb53ee.PNG)


The user can see, the information, that "No database is connected". On the left side of the window there is a toolbar with some options. There are "Connect DB", "Catalogue", "Branches", "Readers", "Borrowed Books", "Employees", "Quit" options, but every option, apart from "Connect DB" and "Quit", is disabled. At the top there is also a menu bar with "File" and "Help" options. "File" has "Connect DB", "New Query" and "Quit" option, whereas "Help" has "About", "Database Diagram" and "About QT" option. At the botton there is status bar. It contains warning image if database is not connected or confirmation sign if it is connected.

To use the program the user has to choose "Connect DB" option. It connects SQL Server database with created Qt project. After choosing this option message box shows info, that database is connected now. 


![2_connected](https://user-images.githubusercontent.com/63510085/121780794-2c1a6580-cba2-11eb-9ee3-7e4a9f4e8493.PNG)


After clicking OK on the message box, some options from toolbar and menu bar are set as enabled, and "Connect DB" option is disabled from now.


![3a_conn_avail](https://user-images.githubusercontent.com/63510085/121808779-6cd5b580-cc5a-11eb-9749-8797a14d538c.PNG)


The user can now display on the table view collections of data from database. Selected collection is backlighted on the toolbar. View for "Catalogue" option is presented below. 


![4a_cat](https://user-images.githubusercontent.com/63510085/121820457-2e102180-cc93-11eb-8306-315033e4dd95.PNG)


In some collections filters are implemented - for example in "Catalogue" - title, category and city filte, in "Readers" - first name and last name filter. In "Catalogue" after clicking "Apply filters" - the message box shows up, after closing it information table view shows fitting values.


![5a_cat_fit](https://user-images.githubusercontent.com/63510085/121820461-310b1200-cc93-11eb-821a-088a12080d4b.PNG)


After clicking "**Help->Database Diagram**", new dialog is opened. It shows the diagram of database created using sql queries from sql_queries directory.


![6a_diagram](https://user-images.githubusercontent.com/63510085/121820462-32d4d580-cc93-11eb-8766-08152d6b180d.PNG)

After clicking "**File->New Query**", new dialog shows up. On the right side of the window there is "Query Script" field and on the right side "Table View" field. After writing the query, the user has to click "Execute Query" and the results are shown in the table view. There is also a message box about inserted query. The user has to remember, that playing with this option could be dangerous for database! :) 


![7a_query](https://user-images.githubusercontent.com/63510085/121820466-349e9900-cc93-11eb-91fc-edf6f4abd568.PNG)


Afer clicking "Help->About" message box presenting some short description of the project is shown. After clicking "Help->About Qt" - some informations about Qt are presented.

**The dialogs ("New Query" and "Database Diagram") were made using modeless aproach and smart pointers.**


## Developing
There are of course some new things that could be implemented or developed and hopefully they will be in the neareest future :) 