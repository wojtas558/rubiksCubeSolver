#include "class.h"
#include <windows.h>
#include <string>
using namespace std;

string RubiksCube::showTile(int color)
{
    switch(color)
    {
        case white:
            wprintf(L"%c[%d;2;255;255;255m#", 0x1B, 38);//zmienic na jedna funkcje z kolorkiem rgb jako argument
            wprintf(L"%c[%dm", 0x1B, 39);
            break;  
        case blue:
            wprintf(L"%c[%dm#", 0x1B, 36);
            wprintf(L"%c[%dm", 0x1B, 39);
            break;
        case red:
            wprintf(L"%c[%d;2;255;0;0m#", 0x1B, 38);//zmienic na jedna funkcje z kolorkiem rgb jako argument
            wprintf(L"%c[%dm", 0x1B, 39);
            break;
        case green:
            wprintf(L"%c[%dm#", 0x1B, 32);
            wprintf(L"%c[%dm", 0x1B, 39);
            break;
        case orange:        
            wprintf(L"%c[%d;2;255;103;0m#", 0x1B, 38);//zmienic na jedna funkcje z kolorkiem rgb jako argument
            wprintf(L"%c[%dm", 0x1B, 39);
            break;
        case yellow:
            wprintf(L"%c[%dm#", 0x1B, 33);
            wprintf(L"%c[%dm", 0x1B, 39);
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
    cout << endl;

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
    //this code allows to show colors in cmd is
    //and its copied from
//https://learn.microsoft.com/en-us/windows/console/console-virtual-terminal-sequences#example-of-enabling-virtual-terminal-processing
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE)
    {
        cout << GetLastError();
    }
    DWORD dwMode = 0;
    if (!GetConsoleMode(hOut, &dwMode))
    {
        cout << GetLastError();
    }
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    if (!SetConsoleMode(hOut, dwMode))
    {
        cout <<  GetLastError();
    }
    setCubeToSolved(front, top);
    return;
}

void RubiksCube::solveCube()
{
    makeWhiteCross();
    makeFirstLayer();
    makeSecondLayer();
    makeYellowCross();
    permuteYellowCross();
    permuteYellowCorners();
    rotateYellowCornersWithoutDMove();
    // showCube();
    // getch();
    return;
}