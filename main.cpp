#include <iostream>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.rotateCube("F U2 D' B' L2 B2 F R2 F2 R2 D' F");
    // getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}