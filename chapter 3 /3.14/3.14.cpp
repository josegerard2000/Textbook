//A retail company must file a monthly sales tax report listing the sales for the month 
//and the amount of sales tax collected. 
//Write a program that asks for the month, the year, and the total amount collected at the cash register 
//(that is, sales plus sales tax). Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
//If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as:
//S=T/ 1.06
//S is the product sales and T is the total income 
//(product sales plus sales tax). The program should display a report similar to
//Month: October 
//Total Collected:26572.89 
 //Sales:25068.76 

//County Sales Tax: $ $ 501.38
//State Sales Tax: $ $ 1002.75
//Total Sales Tax:$ 501.38 
#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std ; 



int main () {

string month; 
double total; 

cout << " Enter month:  " << endl ; 
getline (cin , month) ; 

cout << "Enter total amount collected: " << endl ; 
cin >> total ; 


double countyTax = total * 02 , stateTx = total * .04 , totalSaleTax = total * .06 ;

cout << setprecision (2) << fixed ; 
cout << "Mouth: " << setw(10)  <<  month << endl ; 
cout << "Total collected: " << setw(10 )  << total << endl ; 
cout << "-----------------------------" << endl; 
cout << "County Sale Tax: " << setw(10)<<  countyTax << endl ; 
cout << "State Sale Tax: " << setw(11) <<  stateTx << endl ; 
cout << "Total State Tax: " << setw(10) <<  totalSaleTax << endl ; 












}