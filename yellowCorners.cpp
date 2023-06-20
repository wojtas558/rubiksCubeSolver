#include "class.h"
#include <conio.h>
using namespace std;

bool RubiksCube::checkCorners(int corner)
{
    if(corner == 1 || corner == 0)
        if(!((frontSide[0][2] == yellow || frontSide[0][2] == blue || frontSide[0][2] == red) && (rightSide[0][0] == yellow || rightSide[0][0] == blue || rightSide[0][0] == red) && (topSide[2][2] == yellow || topSide[2][2] == blue || topSide[2][2] == red)))
            return false;
    if(corner == 2 || corner == 0)
        if(!((rightSide[0][2] == yellow || rightSide[0][2] == red || rightSide[0][2] == green) && (backSide[0][2] == yellow || backSide[0][2] == red || backSide[0][2] == green) && (topSide[0][2] == yellow || topSide[0][2] == red || topSide[0][2] == green)))
            return false;
    if(corner == 3 || corner == 0)
        if(!((backSide[0][0] == yellow || backSide[0][0] == green || backSide[0][0] == orange) && (leftSide[0][0] == yellow || leftSide[0][0] == green || leftSide[0][0] == orange) && (topSide[0][0] == yellow || topSide[0][0] == green || topSide[0][0] == orange)))
            return false;
    if(corner == 4 || corner == 0)
        if(!((leftSide[0][2] == yellow || leftSide[0][2] == orange || leftSide[0][2] == blue) && (frontSide[0][0] == yellow || frontSide[0][0] == orange || frontSide[0][0] == blue) && (topSide[2][0] == yellow || topSide[2][0] == orange || topSide[2][0] == blue)))
            return false;
    return true;    
}

void RubiksCube::permuteYellowCorners()
{
    while(true)
    {
        if(checkCorners())
            return;
        if(checkCorners(1))
            rotateCube("U R U' L' U R' U' L");
        else if(checkCorners(2))
            rotateCube("U B U' F' U B' U' F");
        else if(checkCorners(3))
            rotateCube("U L U' R' U L' U' R");
        else if(checkCorners(4))
            rotateCube("U F U' B' U F' U' B");
        else
            rotateCube("U R U' L' U R' U' L");
    }
}

void RubiksCube::rotateYellowCorners()
{
    int controlSum;
    if(topSide[0][0] == yellow)
        controlSum++;
    if(topSide[0][2] == yellow)
        controlSum++;
    if(topSide[2][0] == yellow)
        controlSum++;
    if(topSide[2][2] == yellow)
        controlSum++;
    if(controlSum == 4)
        return;
    if(leftSide[0][2] == yellow)
    {
        for(int i = 0;i < 2;i++)
            rotateCube("L D L' D'");
    }
    else if(frontSide[0][0] == yellow)
    {
        for(int i = 0;i < 4;i++)
            rotateCube("L D L' D'");
    }
    if(frontSide[0][2] == yellow)
    {
        for(int i = 0;i < 2;i++)
            rotateCube("U L D L' D' U'");
    }
    else if(rightSide[0][0] == yellow)
    {
        for(int i = 0;i < 4;i++)
            rotateCube("U L D L' D' U'");
    }
    if(rightSide[0][2] == yellow)
    {
        for(int i = 0;i < 2;i++)
            rotateCube("U2 L D L' D' U2");
    }
    else if(backSide[0][2] == yellow)
    {
        for(int i = 0;i < 4;i++)
            rotateCube("U2 L D L' D' U2");
    }
    if(backSide[0][0] == yellow)
    {
        for(int i = 0;i < 2;i++)
            rotateCube("U' L D L' D' U");
    }
    else if(leftSide[0][0] == yellow)
    {
        for(int i = 0;i < 4;i++)
            rotateCube("U' L D L' D' U");
    }
}
