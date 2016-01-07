
    //Author: Marco Arias
    //Created on January 6, 2016,
    //Purpose:  How Many does it take?
 
//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>   //Random funiction location
#include <cmath>     //math functions
#include <ctime>    // time to set the random seed
#include <iomanip>  //Format library
#include <fstream>  //Readin/writin to a file
using namespace std;

//User Libraries

//Global Constant
const float  GRAVITY=32.074f;//Sea level earth acceleration constant ft/sec^2



//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number of seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ofstream out;//Declare a file stream object called output
    float  drpTime,distance;   //Time in sec and Distance in feet
    
    
   
    //Inputting the time with a random number and opening a file
    drpTime=rand()%11+10;//[10,20]secs
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    
    
    //Calculate the total
    distance=0.5f*GRAVITY*drpTime*drpTime;   
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<"(sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the distance to 3 decimals
    cout<<"Free Fall Distance = "<<setw(9)<<distance<<"(ft)"<<endl;
   
     //Calculate the total
    distance=0.5f*GRAVITY*pow(drpTime,2);  //power  
    
    //Output the results
    
    cout<<fixed<<setprecision(3)<<showpoint;//Format the distance to 3 decimals
    cout<<"Free Fall Distance = "<<setw(9)<<distance<<"(ft)"<<endl;
    
     //Calculate the total
    distance=0.5f*GRAVITY*exp(2*log(drpTime));   //exponential of the log
    
    //Output the results
    
    cout<<fixed<<setprecision(3)<<showpoint;//Format the distance to 3 decimals
    cout<<"Free Fall Distance = "<<setw(9)<<distance<<"(ft)"<<endl;
    
      //Output the results
    
    out<<fixed<<setprecision(3)<<showpoint;//Format the distance to 3 decimals
    out<<"Free Fall Distance = "<<setw(9)<<distance<<"(ft)"<<endl;
    
    
  //Exit stage right make sure to close files
    out.close();
    return 0;
}