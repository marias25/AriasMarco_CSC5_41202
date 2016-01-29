/* 
 * File:   main.cpp
 * Author: Marco Arias
 * Created on January 27, 2016, 11:08 AM
 * Purpose:Midterm Problem 3
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    string date;           //The date for check
    string payee,lstNme;   //The person being paid
    //int  amount;         //The amount being paid
    string acntHld,lastNme;//The account holder
    int    n100s,n10s,n1s; //Conversion numbers
    int  number;         //Number
    
    
    
    //The data the user needs to input before showing check
    cout<<"Enter the date as mm/dd/yyyy:\n";
    cin>>date;
    cout<<"Enter the payee:\n";
    cin>>payee>>lstNme;
    cout<<"Enter the amount in dollars:\n";
    cin>>number;
    cout<<"Enter the account holder:\n";
    cin>>acntHld>>lastNme;
    cout<<"Here it is!\n\n";
    
   
    
    //Output the 100's
 
    
    //The info being displayed as a check
    
    cout<<acntHld<<" "<<lastNme<<endl;
    cout<<"STREET ADRESS\n";
    cout<<"CITY, STATE,ZIP"<<"\t\t\t\t\t\t\t\t"<<"Date:"<<date<<endl<<endl;
    cout<<"Pay to the order of: "<<payee<<" "<<lstNme<<"\t\t\t $ "<<
            static_cast<int>(number)<<endl<<endl;
    
     n100s=(number-number%100)/100;//Number of 100s
    number=(number-n100s*100);//Subtract off hundreds
    n10s=(number-number%10)/10;//Number of 10s
    n1s=(number-n10s*10);//Number of 1s

    
       switch(n100s){
        case 9: cout<<"nine hundred and ";break;
        case 8: cout<<"eight hundred and ";break;
        case 7: cout<<"seven hundred and ";break;
        case 6: cout<<"six hundred and ";break;
        case 5: cout<<"five hundred and ";break;
        case 4: cout<<"four hundred and ";break;
        case 3: cout<<"three hundred and ";break;
        case 2: cout<<"two hundred and ";break;
        case 1: cout<<"one hundred and ";break;
    }
    
    //Output the 10's
     switch(n10s){
        case 9: cout<<"ninety ";break;
        case 8: cout<<"eighty ";break;
        case 7: cout<<"seventy ";break;
        case 6: cout<<"sixty ";break;
        case 5: cout<<"fifty ";break;
        case 4: cout<<"forty ";break;
        case 3: cout<<"thirty ";break;
        case 2: cout<<"twenty ";break;
    }
     
     //output the 1's
     switch(n1s){
        case 19: cout<<"nineteen";break;
        case 18: cout<<"eighteen";break;
        case 17: cout<<"seventeen";break;
        case 16: cout<<"sixteen";break;
        case 15: cout<<"fifteen";break;
        case 14: cout<<"fourteen";break;
        case 13: cout<<"thirteen";break;
        case 12: cout<<"twelve";break;
        case 11: cout<<"eleven";break;
        case 10: cout<<"ten"; break;
        case 9: cout<<"nine";break;
        case 8: cout<<"eight";break;
        case 7: cout<<"seven";break;
        case 6: cout<<"six";break;
        case 5: cout<<"five";break;
        case 4: cout<<"four";break;
        case 3: cout<<"three";break;
        case 2: cout<<"two";break;
        case 1: cout<<"one";break;
        case 0: cout<<" ";break;
    }


    
    cout<<"and 0/100 cents"<<endl<<endl;
    cout<<"BANK OF CSC5\n\n";
    cout<<"FOR:   GOTTA PAY THE RENT"<<"\t\t\t\t\t\t"<<acntHld<<" "<<lastNme<<endl;
    
    
    
    return 0;
}

