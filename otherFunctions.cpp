#include "class.h"
#include <conio.h> 
#include <string>
using namespace std;

string RubiksCube::showTile(int color)
{
    switch(color)
    {
        case white:
            printf("%c[%dm#", 0x1B, 37);
            
            break;  
        case blue:
            printf("%c[%dm#", 0x1B, 36);
            printf("%c[%dm", 0x1B, 39);
            break;
        case red:
            printf("%c[%d;2;255;0;0m#", 0x1B, 38);//zmienic na jedna funkcje z kolorkiem rgb jako argument
            printf("%c[%dm", 0x1B, 39);
            break;
        case green:
            printf("%c[%dm#", 0x1B, 32);
            printf("%c[%dm", 0x1B, 39);
            break;
        case orange:        
            printf("%c[%dm#", 0x1B, 34);
            printf("%c[%dm", 0x1B, 39);
            break;
        case yellow:
            printf("%c[%dm#", 0x1B, 33);
            printf("%c[%dm", 0x1B, 39);
            break;   
        default:
            cout << "#";
    }
    
    return "";
}
//poprawic na voida i oddzielne couty myslnikow
void RubiksCube::showCube()
{
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << showTile(topSide[i][0]) << "-" << showTile(topSide[i][1]) << "-" << showTile(topSide[i][2]); 
        cout << endl;
    }   
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << showTile(leftSide[i][0]) << "-" << showTile(leftSide[i][1]) << "-" << showTile(leftSide[i][2]) << "\t";
        cout << showTile(frontSide[i][0]) << "-" << showTile(frontSide[i][1]) << "-" << showTile(frontSide[i][2]) << "\t";             
        cout << showTile(rightSide[i][0]) << "-" << showTile(rightSide[i][1]) << "-" << showTile(rightSide[i][2]);        
        cout << endl;
    }  
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << showTile(downSide[i][0]) << "-" << showTile(downSide[i][1]) << "-" << showTile(downSide[i][2]);     
        cout << endl;
    }
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << showTile(backSide[i][0]) << "-" << showTile(backSide[i][1]) << "-" << showTile(backSide[i][2]);        
        cout << endl;
    }        

    return;
}

void RubiksCube::setCubeToSolved(int front, int top)
{
    int down, right, back, left;
    if(top == yellow)
        down = white;
    else if(top == white)
        down = yellow;
    if(front == blue && top == white)
    {
        right = orange;
        back = green;
        left = red;
    } 
    else if(front == orange && top == white)
    {
        right = green;
        back = red;
        left = blue;
    }
    else if(front == green && top == white)
    {
        right = red;
        back = blue;
        left = orange;
    } 
    else if(front == red && top == white)
    {
        right = blue;
        back = orange;
        left = green;
    } 
    if(front == blue && top == yellow)
    {
        right = red;
        back = green;
        left = orange;
    } 
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            downSide[i][j] = down;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            frontSide[i][j] = front;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            rightSide[i][j] = right;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            backSide[i][j] = back;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            leftSide[i][j] = left;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            topSide[i][j] = top;

    return;
}


RubiksCube::RubiksCube(int front, int top)
{
    setCubeToSolved(front, top);
    return;
}

void RubiksCube::solveCube()
{
    makeWhiteCross();
    showCube();
    getch();
    makeFirstLayer();
    showCube();
    getch();
    makeSecondLayer();
    showCube();
    getch();
    makeYellowCross();
    showCube();
    getch();
    permuteYellowCross();
    showCube();
    getch();
    permuteYellowCorners();
    return;
}