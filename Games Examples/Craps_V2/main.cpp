/* 
    File:   main.cpp
    Author: Dr. Mark E. Lehr
    Created on January 13, 2016, 10:18 AM
    Purpose: Simple Game  
*/

//System Libraries
#include <iostream>//i/o
#include <cstdlib>//srand and rand function
#include <ctime>//time to set the random number seed
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    unsigned short wins=0, losses=0, games;
    ofstream out;
    //Open the file
    out.open("Cardgame.dat");
    
    //Input data
    cout<<"How many games of craps would you like to play?\n";
    cout<<"Utilize a number between 10,000 and 40,000\n";
    cin>>games;
    
    //Throw the dice
    for (int game=1;game<=games;game++){
        char die1=rand()%6+1;//NUmber b/w [1,6]
        char die2=rand()%6+1;//NUmber b/w [1,6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else{
            //roll again
            bool kpRln=true;
            do{
            die1=rand()%6+1;//NUmber b/w [1,6]
            die2=rand()%6+1;//NUmber b/w [1,6]
            char sum2=die1+die2;
            switch(sum2==7){
                case true:{losses++;kpRln=false;}
                default:
            if(sum==sum2){wins++;kpRln=false;}
                }     
            }while(kpRln);
        }
    }
    
    //Output the results
    cout<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"you lost "<<losses<<" games"<<endl;  
    cout<<"Percentage wise:"<<endl;
    cout<<"You won "<<100.0f*wins/games<<"% games and "<<endl;
    cout<<"you lost "<<100.0f*losses/games<<"% games"<<endl; 
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
        
          
    //Exit stage right
    return 0;

}
