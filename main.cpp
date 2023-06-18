#include <iostream>
#include <string>
#include <conio.h> 
#include "class.h"
#include "consts.h"
using namespace std;

int main()
{
    RubiksCube cube;  
    cube.setCubeToSolved();    
    cube.rotateCube("F2 R2 U' R F U F' U R U2 F2 R' F2 R2 F");
    cube.showCube(); 
    getch();return 0;
}