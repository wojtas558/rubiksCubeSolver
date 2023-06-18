#include "class.h"
#include <conio.h>
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
            printf("%c[%d;2;255;0;0m#", 0x1B, 38);
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
        cout << showTile(bottomSide[i][0]) << "-" << showTile(bottomSide[i][1]) << "-" << showTile(bottomSide[i][2]);     
        cout << endl;
    }
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << showTile(backSide[i][0]) << "-" << showTile(backSide[i][1]) << "-" << showTile(backSide[i][2]);        
        cout << endl;
    }        
}

void RubiksCube::setCubeToSolved()
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            bottomSide[i][j] = white;
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

void RubiksCube::rotateCube(string moves)
{
    string move = "";
    for (int i = 0; i < moves.size(); i+=3)
    {
        move = moves.substr(i, 2);
        if(move == "R ")
        {
            i--;
            R();cout << "R" << endl;
        }
        else if(move == "F ")
        {
            i--;
            F();cout << "F" << endl;
        }
        else if(move == "U ")
        {
            i--;
            U();cout << "U" << endl;
        }
        else if(move == "R2")
        {
            R();showCube();
            R();cout << "R2" << endl;
        }
        else if(move == "F2")
        {
            F();showCube();
            F();cout << "F2" << endl;
        }
        else if(move == "U2")
        {
            U();showCube();
            U();cout << "U2" << endl;
        }
        else if(move == "R'")
        {
            Rprim();cout << "R'" << endl;
        }
        else if(move == "F'")
        {
            Fprim();cout << "F'" << endl;
        }
        else if(move == "U'")
        {
            Uprim();cout << "U'" << endl;
        }     
        showCube();
        getch();
    }    
}

RubiksCube::RubiksCube()
{
    setCubeToSolved();
    return;
}

