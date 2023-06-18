#include <iostream>
#include <string>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube(green, white);  
    cube.showCube();
    cube.rotateCube("B2 D' L' R2 F U2 F2 U' R2 B L D2");
    getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}