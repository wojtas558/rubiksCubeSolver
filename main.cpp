#include <iostream>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.rotateCube("B2 R D L' R' B' R2 B D' F' L' R");
    // getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}