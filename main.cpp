#include <iostream>
#include <conio.h> 
#include <string>
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    // getch();
    string scramble = "";
    while(scramble != "x")
    {
        getline(cin, scramble);
        system("cls");
        cube.rotateCube(scramble);
        cube.showCube();
        getch();
        system("cls");
        cube.solveCube();
        cube.showCube();
    }
    getch();return 0;
}