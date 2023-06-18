#include <iostream>
#include <string>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.setCubeToSolved();    
    cube.rotateCube("F' U2 F R' U F R F2 U2 F U2 R2 F R2 U");
    cube.showCube();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}