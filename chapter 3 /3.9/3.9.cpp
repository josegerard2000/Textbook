//A bag of cookies holds 30 cookies.
//The calorie information on the bag claims that there are 10 “servings” 
//in the bag and that a serving equals 300 calories. 
//Write a program that asks the user to input how many cookies he or she 
//actually ate and then reports how many total calories were consumed.


#include <iostream>
using namespace std ; 



int main ( ) { 

int eat , calories = 100;


cout << "How many cookies did you eat? " << endl ; 
cin >> eat ; 


int  total = eat * calories ;

cout << "Total cookies eat: " << eat << endl ; 
cout << "The total calories consume is: " << total << endl ; 







}