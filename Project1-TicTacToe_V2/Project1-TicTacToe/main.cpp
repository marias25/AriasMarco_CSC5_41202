/* 
 * Author: Marco Arias
 * Created on January 31, 2016, 08:55 AM
 * Purpose: Tic Tac Toe
 * Midterm Problem 4
 */
 
//System Libraries
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};//the matrix rows and columns
char player='X';
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
        cout<<"Enter one of the corresponding numbers: ";
        cin>>a;
        if (a==1)
            matrix[0][0]=player;
        else if (a==2)
            matrix[0][1]=player;
        else if (a==3)
            matrix[0][2]=player;
        else if (a==4)
            matrix[1][0]=player;
        else if (a==5)
            matrix[1][1]=player;
        else if (a==6)
            matrix[1][2]=player;
        else if (a==7)
            matrix[2][0]=player;
        else if (a==8)
            matrix[2][1]=player;
        else if (a==9)
            matrix[2][2]=player;
    }
    void TogglePlayer(){
        if(player=='X')
            player='O';
        else player='X';
    }
    char win(){
        //diagonals
        //00 01 02
        //10 11 12
        //20 21 22
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
        if (matrix[0][0] =='X'&& matrix[1][1] =='X'&& matrix[2][2] =='X')
            return 'X';
        if (matrix[2][0] =='X'&& matrix[1][1] =='X'&& matrix[0][2] =='X')
            return 'X';
       //Win for O
        //diagonals
        //00 01 02
        //10 11 12
        //20 21 22
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
        
        if (matrix[0][0] =='O'&& matrix[1][1] =='O'&& matrix[2][2] =='O')
            return 'O';
        if (matrix[2][0] =='O'&& matrix[1][1] =='O'&& matrix[0][2] =='O')
            return 'O';
        return '/';
    }
//Execution Begins Here

//Declare and initialize variables
  int main(int argc, char** argv) {  
    draw();
    while(1){
        input();
        draw();
        if (win()=='X'){
            cout<<"'X' wins!!\n";
            break;
        }
        else if (win()=='O'){
            cout<<"'O' wins!!\n";
            break;
        }
        TogglePlayer();
    }
                      
   //Exit stage 
    return 0;
}