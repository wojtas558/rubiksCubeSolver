#include "class.h"
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

void RubiksCube::setCubeToSolved()
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            downSide[i][j] = white;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            frontSide[i][j] = blue;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            rightSide[i][j] = red;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            backSide[i][j] = green;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            leftSide[i][j] = orange;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            topSide[i][j] = yellow;

    return;
}

RubiksCube::RubiksCube()
{
    setCubeToSolved();
    return;
}

void RubiksCube::solveCube()
{
    makeWhiteCross();
    return;
}