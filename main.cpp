#include <iostream>
#include <string>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.setCubeToSolved();    
    cube.rotateCube("U' F' R2 F' U2 F U2 F' U' R' U' R2 F U2 F");
    cube.showCube();
    getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}