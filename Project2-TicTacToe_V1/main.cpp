/* 
 * Author: Marco Arias
 * Created on January 31, 2016, 08:55 AM
 * Purpose: Tic-Tac-Toe
 * Midterm Problem 4
 */
 
//System Libraries
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};//the matrix rows and columns
char player='X';//
void draw();//Input the draw sequences
void input();//The player inputs their number to exchange as a letter
void tglPlyr();//Goes between players
char win();//Input the winning sequences

//Execution Begins Here
  int main(int argc, char** argv) { 
//Declare and initialize variables
      ofstream myfile;
      myfile.open("newfile.txt");
      myfile<<"This file is for the Tic-Tac-Toe game!\n";
      myfile.close();
      
    draw();{
        
           }
    while(1){
        input();{
            
                }
        draw();{
        if (win()=='X'){
            cout<<"'X' Wins!!\n";
            break;
        }
               
        else if (win()=='O'){
            cout<<"'O' Wins!!\n";
            break;
        }
        tglPlyr();
      }
    }
                      
   //Exit stage 
    return 0;
}
//All functional prototypes are found here 
void draw(){
 for (int row=0;row<3;row++){
            for(int col=0;col<3;col++){
                cout<<matrix[row][col]<<" ";
            }
            cout<<endl;
        }
}
    void input(){
        int a;
        cout<<"Player "<<player<<" is up! "<<"Enter one of the corresponding numbers "
                "to exchange as your letter: ";
        cin>>a;//User enters their move
 //Enter the users slot and if the slot is taken already, do not allow them
 // to use the space       
    if (a==1){
        if (matrix[0][0]=='1')
            matrix[0][0]=player;
        else{
            cout<<"\nSlot taken. Try again\n"<<endl;
            input();
        }
    }
    else if (a==2){
        if (matrix[0][1]=='2')
            matrix[0][1]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a == 3){
        if (matrix[0][2]=='3')
            matrix[0][2]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a==4){
        if (matrix[1][0]=='4')
            matrix[1][0]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a==5){
        if (matrix[1][1]=='5')
            matrix[1][1]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a==6){
        if (matrix[1][2]=='6')
            matrix[1][2]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a==7){
        if (matrix[2][0]=='7')
            matrix[2][0]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a==8){
        if (matrix[2][1]=='8')
            matrix[2][1]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
    else if (a==9){
        if (matrix[2][2]=='9')
            matrix[2][2]=player;
        else{
            cout<<"Slot taken. Try again"<<endl;
            input();
        }
    }
     
}
//        if (a==1)
//            matrix[0][0]=player;
//        else if (a==2)
//            matrix[0][1]=player;
//        else if (a==3)
//            matrix[0][2]=player;
//        else if (a==4)
//            matrix[1][0]=player;
//        else if (a==5)
//            matrix[1][1]=player;
//        else if (a==6)
//            matrix[1][2]=player;
//        else if (a==7)
//            matrix[2][0]=player;
//        else if (a==8)
//            matrix[2][1]=player;
//        else if (a==9)
//            matrix[2][2]=player;
    void tglPlyr(){//Goes between players
        if(player=='X')
            player='O';
        else player='X';
    }
    char win(){//Winning sequence
        //Win for X
        if (matrix[0][0] =='X'&& matrix[0][1] =='X'&& matrix[0][2] =='X')
            return 'X';
        if (matrix[1][0] =='X'&& matrix[1][1] =='X'&& matrix[1][2] =='X')
            return 'X';
        if (matrix[2][0] =='X'&& matrix[2][1] =='X'&& matrix[2][2] =='X')
            return 'X';
        if (matrix[0][0] =='X'&& matrix[1][0] =='X'&& matrix[2][0] =='X')
            return 'X';
        
        if (matrix[0][1] =='X'&& matrix[1][1] =='X'&& matrix[2][1] =='X')
            return 'X';
        if (matrix[0][2] =='X'&& matrix[1][2] =='X'&& matrix[2][2] =='X')
            return 'X';
        //diagonals for reference
        //00 01 02
        //10 11 12
        //20 21 22
        if (matrix[0][0] =='X'&& matrix[1][1] =='X'&& matrix[2][2] =='X')
            return 'X';
        if (matrix[2][0] =='X'&& matrix[1][1] =='X'&& matrix[0][2] =='X')
            return 'X';
       //Win for O
        if (matrix[0][0] =='O'&& matrix[0][1] =='O'&& matrix[0][2] =='O')
            return 'O';
        if (matrix[1][0] =='O'&& matrix[1][1] =='O'&& matrix[1][2] =='O')
            return 'O';
        if (matrix[2][0] =='O'&& matrix[2][1] =='O'&& matrix[2][2] =='O')
            return 'O';
        if (matrix[0][0] =='O'&& matrix[1][0] =='O'&& matrix[2][0] =='O')
            return 'O';
        
        if (matrix[0][1] =='O'&& matrix[1][1] =='O'&& matrix[2][1] =='O')
            return 'O';
        if (matrix[0][2] =='O'&& matrix[1][2] =='O'&& matrix[2][2] =='O')
            return 'O';
        //diagonals for reference
        //00 01 02
        //10 11 12
        //20 21 22
        if (matrix[0][0] =='O'&& matrix[1][1] =='O'&& matrix[2][2] =='O')
            return 'O';
        if (matrix[2][0] =='O'&& matrix[1][1] =='O'&& matrix[0][2] =='O')
            return 'O';
        return '/';//End of game! Version 1
    }