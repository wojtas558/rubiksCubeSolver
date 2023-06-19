#include "class.h"
#include <windows.h>
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

}