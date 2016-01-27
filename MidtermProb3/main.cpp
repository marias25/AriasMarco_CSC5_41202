/* 
 * File:   main.cpp
 * Author: Marco Arias
 * Created on January 27, 2016, 11:08 AM
 * Purpose:Midterm Problem 3
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    int date;//The date for check
    char payee;//The person being paid
    int amount;//The amount being paid
    short acntHld;//The account holder

    //The data the user needs to input before showing check
    cout<<"Enter the date as mm/dd/yy\n";
    cin>>date;
    cout<<"Enter the payee\n";
    cin>>payee;
    cout<<"Enter the amount in dollars\n";
    cin>>amount;
    cout<<"Enter the account holder\n";
    cin>>acntHld;
    
    //The info being displayed as a check
    
    cout<<"Jane Doe\n";
    cout<<"STREET ADRESS\n";
    cout<<"CITY, STATE,ZIP"<<"\t\t\t\t\t\t\t\t"<<"Date:"<<date<<endl<<endl;
    cout<<"Pay to the order of: "<<payee<<"\t\t\t $ "<<amount<<endl<<endl;
    cout<<"Dollars\n\n";
    cout<<"BANK OF CSC5\n\n";
    cout<<"FOR:   GOTTA PAY THE RENT"<<"\t\t\t\t\t\t"<<"Jane Doe"<<endl;
    
    
    
    return 0;
}

