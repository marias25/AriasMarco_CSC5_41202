/* 
    File:   main.cpp
    Author: Marco Arias
    Created on January 4, 2016, 10:18 AM
    Purpose:  Check out IDE
 */

//System Libraries
#include <cstdlib>
#include <iostream> 
using namespace std;

//User Libraries
 
 //Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare and initialize variables
    float          payRate=1e1f;//Pay Rate in $'s/hour
    unsigned char hrsWrkd=40; //Hours Worked (hrs)
    
    //iNPUT data
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;//Pay Check ($'s)
    
    //Output the results
    cout<<"Pay Rate     = $ " <<payRate<<" hrs"<<endl;        
    cout<<"Hours Worked =   "<<static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check    = $ " <<payChk<<endl;
    
    
    //Exit stage right
    return 0;
}

