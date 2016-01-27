/* 
    File:   main.cpp
    Author: Marco Arias
    Created on January 26, 2016, 07:38 PM
    Purpose:  Menu for Midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);//Universal Constant 3.1415 etc
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int nSoltn;//The number the player will insert
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Midterm Problem Set"<<endl;
        cout<<"Type 1 to Display Midterm Problem 1"<<endl;
        cout<<"Type 2 to Display Midterm Problem 2"<<endl;
        cout<<"Type 3 to Display Midterm Problem 3"<<endl;
        cout<<"Type 4 to Display Midterm Problem 4"<<endl;
        cout<<"Type 5 to Display Midterm Problem 5"<<endl;
        cout<<"Type 6 to Display Midterm Problem 6"<<endl;
        cout<<"Type 7 to Display Midterm Problem 7"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                //Declare variables
                int num,row,col;//The number being used in the for loop
                //Initialize the sequence
                              
                //Input the number of terms in the sequence
        cout<<"Input any number: ";
        cin>>num;

        for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
        if(row==col || row==(num+1)-col)
             cout<<(num-col)+1;
        else cout<<" ";
        }
        cout<<endl;
     
                //Output or calculate the output required
        } 
        cout<<endl;
                break;
            }
            case 2:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob11"<<endl;
                cout<<endl<<"The finite sum for e^x"<<endl<<endl;
                //Declare and initialize variables for etox
                const unsigned char nTerms=13;
                float etox=1,x;//e^x

                //Input the value x
                cout<<"Input x of e^x computation"<<endl;
                cin>>x;

                //Calculate e^x
                for(int n=1;n<=nTerms;n++){
                    //Declare and initialize variables
                    unsigned int factN=1;//N and N

                    //Calculate the factorial
                    for(int i=1;i<=n;i++){
                        factN*=i;
                    }

                    //Calculate e^x with the above factorial
                    etox+=pow(x,n)/factN;
                }

                //Output the results
                cout<<"The exact  value of e^"<<x<<"="<<exp(x)<<endl;
                cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
                break;
            }
            case 3:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
                cout<<endl<<"The finite sum for PI"<<endl<<endl;

                //Declare and initialize variables for apprxPI
                float apprxPI=1;    //Approximate value of PI to start
                unsigned int nTerms;//Number of terms to limit sum of PI
                char sign=-1;       //Alternating sign of the PI sequence

                //Input the number of terms in the sequence
                cout<<"Input number of Terms to approximate PI"<<endl;
                cin>>nTerms;

                //Approximate PI/4
                for(int i=2,j=3;i<=nTerms;i++,j+=2){
                    apprxPI+=(sign/static_cast<float>(j));
                    sign*=-1;
                }
                apprxPI*=4;//Multiply by 4 once to approximate PI

                //Output the results
                cout<<"The exact  value of PI="<<PI<<endl;
                cout<<"The number of terms it took to approx PI="<<nTerms<<endl;
                cout<<"The approx value of PI="<<apprxPI<<endl<<endl;
                break;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }      
    } while(reDsply);
    
    //Exit stage right
    return 0;
    }
    
