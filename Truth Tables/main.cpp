
/* 
 * File:   main.cpp
 * Author: maria
 *
 * Created on January 11, 2016, 8:58 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
   bool  x=true;
   bool  y=true;
    //Input Data
    //Create heading
    cout<<"X Y  !X !Y  X&&Y X||Y X^Y (X^Y)^X (X^Y)^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y "<<endl;
    
    //First Row
    cout<<(x?'T' : 'F')<<" "; 
    cout<<(y?'T' : 'F')<<"  "; 
    cout<<(!x?'T' : 'F')<<"   "; 
    cout<<(!y?'T' : 'F')<<"    ";
    cout<<(x&&y?'T' : 'F')<<"   "; 
    cout<<(x||y?'T' : 'F')<<"    "; 
    cout<<((x^y)?'T' : 'F')<<"    "; 
    cout<<(((x^y)^x)?'T' : 'F')<<"       ";
    cout<<(((x^y)^y)?'T' : 'F')<<"         "; 
    cout<<(!(x&&y)?'T' : 'F')<<"      "; 
    cout<<((!x||!y)?'T' : 'F')<<"       "; 
    cout<<(!(x||y)?'T' : 'F')<<"     ";
    cout<<((!x&&!y)?'T' : 'F')<<"       " <<endl;
    
   
    
    //Second Row 
    x=true;
    y=false;
    cout<<(x?'T' : 'F')<<" "; 
    cout<<(y?'T' : 'F')<<"  "; 
    cout<<(!x?'T' : 'F')<<"   "; 
    cout<<(!y?'T' : 'F')<<"    ";
    cout<<(x&&y?'T' : 'F')<<"   "; 
    cout<<(x||y?'T' : 'F')<<"    "; 
    cout<<((x^y)?'T' : 'F')<<"    "; 
    cout<<(((x^y)^x)?'T' : 'F')<<"       ";
    cout<<(((x^y)^y)?'T' : 'F')<<"         "; 
    cout<<(!(x&&y)?'T' : 'F')<<"      "; 
    cout<<((!x||!y)?'T' : 'F')<<"       "; 
    cout<<(!(x||y)?'T' : 'F')<<"     ";
    cout<<((!x&&!y)?'T' : 'F')<<"       " <<endl;
    
    
    //Third Row
    x=false;
    y=true;
    cout<<(x?'T' : 'F')<<" "; 
    cout<<(y?'T' : 'F')<<"  "; 
    cout<<(!x?'T' : 'F')<<"   "; 
    cout<<(!y?'T' : 'F')<<"    ";
    cout<<(x&&y?'T' : 'F')<<"   "; 
    cout<<(x||y?'T' : 'F')<<"    "; 
    cout<<((x^y)?'T' : 'F')<<"    "; 
    cout<<(((x^y)^x)?'T' : 'F')<<"       ";
    cout<<(((x^y)^y)?'T' : 'F')<<"         "; 
    cout<<(!(x&&y)?'T' : 'F')<<"      "; 
    cout<<((!x||!y)?'T' : 'F')<<"       "; 
    cout<<(!(x||y)?'T' : 'F')<<"     ";
    cout<<((!x&&!y)?'T' : 'F')<<"       " <<endl;
    
    
    x=false;
    y=false;
    cout<<(x?'T' : 'F')<<" "; 
    cout<<(y?'T' : 'F')<<"  "; 
    cout<<(!x?'T' : 'F')<<"   "; 
    cout<<(!y?'T' : 'F')<<"    ";
    cout<<(x&&y?'T' : 'F')<<"   "; 
    cout<<(x||y?'T' : 'F')<<"    "; 
    cout<<((x^y)?'T' : 'F')<<"    "; 
    cout<<(((x^y)^x)?'T' : 'F')<<"       ";
    cout<<(((x^y)^y)?'T' : 'F')<<"         "; 
    cout<<(!(x&&y)?'T' : 'F')<<"      "; 
    cout<<((!x||!y)?'T' : 'F')<<"       "; 
    cout<<(!(x||y)?'T' : 'F')<<"     ";
    cout<<((!x&&!y)?'T' : 'F')<<"       " <<endl;
    
    //Swap using temp
    
    //Swap using exclusive or operator
    
    //Exit Stage right

    return 0;
}

