/* 
 * File:   main.cpp
 * Author: Marco Arias
 *
 * Created on January 26, 2016, 3:29 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
 using namespace std;

 int main(int argc, char** argv) {

    unsigned short number;
    unsigned char num1,num2,num3,num4;//the number the user will input
     
    cout<<"Input any number but not a letter \n";
    cin>>number;
    cout<<"Input = ";
     
    //Calculate the number
    num1=(number-number%1000)/1000;//Number in first place
    number=(number-num1*1000);     //Subtract off number
    num2 =(number-number%100)/100;  //Number in second place
    number=(number-num2*100);       //Subtract off number
    num3  =(number-number%10)/10;    //Number in third place
    num4   =(number-num3*10);         //Number in fourth place
    
    cout<<static_cast<int>(num1);
    cout<<static_cast<int>(num2);
    cout<<static_cast<int>(num3);
    cout<<static_cast<int>(num4)<<endl;

    switch(num4){ 
        case 9:  cout<<"9 *********";break;
        case 8:  cout<<"8 ********";break; 
        case 7:  cout<<"7 *******";break;
        case 6:  cout<<"6 ******";break;
        case 5:  cout<<"5 *****";break;
        case 4:  cout<<"4 ****";break;
        case 3:  cout<<"3 ***";break;
        case 2:  cout<<"2 **";break;
        case 1:  cout<<"1 *";break;
        case 0:  cout<<"0 ";break;
        default: cout<<"?";
    }cout<<endl;
    switch(num3){
        case 9:  cout<<"9 *********";break;
        case 8:  cout<<"8 ********";break; 
        case 7:  cout<<"7 *******";break;
        case 6:  cout<<"6 ******";break;
        case 5:  cout<<"5 *****";break;
        case 4:  cout<<"4 ****";break;
        case 3:  cout<<"3 ***";break;
        case 2:  cout<<"2 **";break;
        case 1:  cout<<"1 *";break;
        case 0:  cout<<"0 ";break;
        default: cout<<"?";
    }cout<<endl;
    switch(num2){
        case 9:  cout<<"9 *********";break;
        case 8:  cout<<"8 ********";break; 
        case 7:  cout<<"7 *******";break;
        case 6:  cout<<"6 ******";break;
        case 5:  cout<<"5 *****";break;
        case 4:  cout<<"4 ****";break;
        case 3:  cout<<"3 ***";break;
        case 2:  cout<<"2 **";break;
        case 1:  cout<<"1 *";break;
        case 0:  cout<<"0 ";break;
        default: cout<<"?"<<endl;
    }cout<<endl;
    switch(num1){
        case 9:  cout<<"9 *********";break;
        case 8:  cout<<"8 ********";break; 
        case 7:  cout<<"7 *******";break;
        case 6:  cout<<"6 ******";break;
        case 5:  cout<<"5 *****";break;
        case 4:  cout<<"4 ****";break;
        case 3:  cout<<"3 ***";break;
        case 2:  cout<<"2 **";break;
        case 1:  cout<<"1 *";break;
        case 0:  cout<<"0 ";break;
        default: cout<<"?"<<endl;
    }
    return 0;
     }

