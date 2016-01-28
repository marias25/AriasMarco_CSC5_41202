/* 
 * Author: Kayla Rodriguez
 * Created on January 19, 2016, 9:20 PM
 * Purpose: Sequence
 * Midterm Problem 6
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int x,n,i,frstTrm, scndTrm, nxtTrm;//number to be inputted
    float sum;

    //Input the value x
    cout<<"Input x value. "<<endl;
    cin>>x;
    cout<<"How many terms are in this sequence? "<<endl;
    cin>>n;
    cout<<"Here is the sequence:\n";

    //Calculation of sum
    for(i=0;i<=n-1;i++){
            sum=((n-i)/(pow(x,i)));   
    //Output
    cout<<sum;
    
    nxtTrm=sum+sum;
    cout<<nxtTrm<<" + ";
    
    frstTrm=scndTrm;
    scndTrm=nxtTrm; 
    }

    //Exit stage 
    return 0;
}