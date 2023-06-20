#include <iostream>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.rotateCube("B' L R D B' R B L2 R F2 D' B'");
    // getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}