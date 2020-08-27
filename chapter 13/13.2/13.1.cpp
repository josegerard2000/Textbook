/*Write a class named Employee that has the following member variables:
• name. A string that holds the employee’s name.
• idNumber. An int variable that holds the employee’s ID number.
• department. A string that holds the name of the department where the employee
works.
• position. A string that holds the employee’s job title.
The class should have the following constructors:
• A constructor that accepts the following values as arguments and assigns them to the appropriate member variables:
 employee’s name, employee’s ID number, depart- ment, and position.
• A constructor that accepts the following values as arguments and assigns them to the appropriate member variables:
 employee’s name and ID number. The department and position fields should be assigned an empty string ("").
• A default constructor that assigns empty strings ("") to the name, department, and position member variables,
 and 0 to the idNumber member variable.
Write appropriate mutator functions that store values in these member variables and accessor functions 
that return the values in these member variables. Once you have written the class, write a separate program 
that creates three Employee objects to hold the following data. */ 
#include "13.h" 
#include "13.2.cpp"
#include <iostream> 
#include <string> 



using namespace std ; 


int main ( ) 
{ 

Employe ok  ( 47899 , "Susan" , "Accounting" , "VicePresident" ) ; 
cout << "Name " << ok.setName() << endl ; 
return 0 ;
}