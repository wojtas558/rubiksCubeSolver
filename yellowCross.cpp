#include "class.h"
#include <conio.h>
using namespace std;

void RubiksCube::makeYellowCross()
{
    if(topSide[0][1] != yellow && topSide[1][0] != yellow && topSide[1][2] != yellow && topSide[2][1] != yellow)
        rotateCube("F R U R' U' R U R' U' F'");  
    else if (topSide[0][1] == yellow && topSide[1][0] == yellow && topSide[1][2] == yellow && topSide[2][1] == yellow)
        return;
    if(topSide[1][0] == yellow && topSide[2][1] == yellow)
        rotateCube("U");
    else if(topSide[2][1] == yellow && topSide[1][2] == yellow)
        rotateCube("U2");
    else if(topSide[0][1] == yellow && topSide[1][2] == yellow)
        rotateCube("U'");
    if(topSide[0][1] == yellow && topSide[1][0] == yellow)
        rotateCube("F R U R' U' F'");
    if(topSide[0][1] == yellow && topSide[2][1] == yellow)
        rotateCube("U");
    if(topSide[1][0] == yellow && topSide[1][2] == yellow)
    {
        rotateCube("F R U R' U' F'");
        return;
    }
    cout << "yellow cross error" << endl;
}

void RubiksCube::permuteYellowCross()
{
    int rotations = 0;
    while(true)
    {   
        // cout << rotations;
        // showCube();
        // getch();
        if(frontSide[0][1] == blue && rightSide[0][1] == red && backSide[0][1] && leftSide[0][1] == orange)
            return;
        if(backSide[0][1] == green && rightSide[0][1] == red)
        {
            rotateCube("U' R U2 R' U' R U' R'");
            return;
        }
        if(rightSide[0][1] == red && frontSide[0][1] == blue)
        {
            rotateCube("U' F U2 F' U' F U' F'");
            return;
        }
        if(frontSide[0][1] == blue && leftSide[0][1] == orange)
        {
            rotateCube("U' L U2 L' U' L U' L'");
            return;
        }
        if(leftSide[0][1] == orange && backSide[0][1] == green)
        {
            rotateCube("U' B U2 B' U' B U' B'");
            return;
        }
        rotateCube("U");
        rotations++;
        if(rotations == 3)
            rotateCube("U' R U2 R' U' R U' R'");
    }
    cout << "yellow cross permutation error";
    return;
}