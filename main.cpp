#include <iostream>
#include <string>
#include <conio.h> 
#include "class.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.rotateCube("D U' F L R B2 U2 D F B R2 U2");
    cube.showCube();
    getch();
    cube.solveCube();
    cube.showCube();
    getch();return 0;
}