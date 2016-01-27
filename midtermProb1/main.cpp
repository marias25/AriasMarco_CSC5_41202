/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: maria
 *
 * Created on January 26, 2016, 1:45 PM
 */

#include <iostream>
 using namespace std;

 int main() {
 //Declare Variables 
     int num,rows,cols;
     cout<<"Enter a number to make an x shape\n";
     cin>>num;
     cout<<"Here it is!"<<endl;
     for(rows=1;rows<=num;rows++){
         for(cols=1;cols<=num;cols++){
             if(rows==cols||cols==(num+1)-rows)
                 cout<<num>0;
             
             else cout<<" ";
                 
         }
         cout<<endl;
     }

 return 0;
 }

