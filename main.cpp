#include <iostream>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.rotateCube("B U2 R' F2 R2 D2 L2 B' F R' L2 F2");
    cube.showCube();
    // getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}