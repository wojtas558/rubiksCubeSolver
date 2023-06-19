#include <iostream>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.rotateCube("U2 L2 D' F2 R' B2 F' L' D' F D' U2");
    cube.showCube();
    // getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}