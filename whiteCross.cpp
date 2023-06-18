#include "class.h"
#include "windows.h"
using namespace std;


void RubiksCube::makeWhiteCross()
{
    while (blueSideTile == false || redSideTile == false || greenSideTile == false || orangeSideTile == false)
    {
        whiteCrossStage();
        if(!blueSideTile)
            cout << "blue" << endl;
        if(!redSideTile)
            cout << "red" << endl;
        if(!greenSideTile)
            cout << "green" << endl;
        if(!orangeSideTile)
            cout << "orange" << endl;
        showCube();
        Sleep(5000);
    }
    return;
}
void RubiksCube::whiteCrossStage()
{    
    if(downSide[0][1] == white || downSide[1][2] == white || downSide[2][1] == white || downSide[1][0] == white)
    {
        if(downSide[0][1] == white)
        {
            switch (frontSide[2][1])
            {
                case blue:
                    blueSideTile = true;
                    break;;
                case red:
                    redSideTile = true;
                    rotateCube("F2 U' R2");
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("F2 U2 B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("F2 U L2");
                    break;
                default:
                    cout << "Error, other color, stage 1.1" << endl;
                    break;
            }
        }
        if(downSide[1][2] == white)
        {
            switch (rightSide[2][1])
            {
                case blue:
                    blueSideTile = true;                    
                    rotateCube("R2 U F2");
                    break;
                case red:
                    redSideTile = true;
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("R2 U' B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("R2 U2 L2");
                    break;
                default:
                    cout << "Error, other color, stage 1.2" << endl;
                    break;
            }
        }
        if(downSide[2][1] == white)
        {
            switch (backSide[2][1])
            {
                case blue:
                    blueSideTile = true;
                    rotateCube("B2 U2 F2");
                    break;
                case red:
                    redSideTile = true;
                    rotateCube("B2 U R2");
                    break;
                case green:
                    greenSideTile = true;
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("B2 U' L2");
                    break;
                default:
                    cout << "Error, other color, stage 1.3" << endl;
                    break;
            }
        }
        if(downSide[1][0] == white)
        {
            switch (leftSide[2][1])
            {
                case blue:
                    blueSideTile = true;
                    rotateCube("L2 U' F2");
                    break;
                case red:
                    redSideTile = true;
                    rotateCube("L2 U2 R2");
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("L2 U B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    break;
                default:
                    cout << "Error, other color, stage 1.4" << endl;
                    break;
            }
        }
    }
    if(topSide[0][1] == white || topSide[1][2] == white || topSide[2][1] == white || topSide[1][0] == white)
    {
        if(topSide[0][1] == white)
        {
            switch (backSide[0][1])
            {
                case blue:
                    blueSideTile = true;
                    rotateCube("U2 F2");
                    break;;
                case red:
                    redSideTile = true;
                    rotateCube("U R2");
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("U' L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.1" << endl;
                    break;
            }
        }
        if(topSide[1][2] == white)
        {
            switch (rightSide[0][1])
            {
                case blue:
                    blueSideTile = true;
                    rotateCube("U F2");
                    break;;
                case red:
                    redSideTile = true;
                    rotateCube("R2");
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("U' B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("U2 L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.2" << endl;
                    break;
            }
        }
        if(topSide[2][1] == white)
        {
            switch (frontSide[0][1])
            {
                case blue:
                    blueSideTile = true;
                    rotateCube("F2");
                    break;;
                case red:
                    redSideTile = true;
                    rotateCube("U' R2");
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("U2 B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("U L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.3" << endl;
                    break;
            }
        }
        if(topSide[1][0] == white)
        {
            switch (leftSide[2][1])
            {
                case blue:
                    blueSideTile = true;
                    rotateCube("U' F2");
                    break;;
                case red:
                    redSideTile = true;
                    rotateCube("U2 R2");
                    break;
                case green:
                    greenSideTile = true;
                    rotateCube("U B2");
                    break;
                case orange:
                    orangeSideTile = true;
                    rotateCube("L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.4" << endl;
                    break;
            }
        }
    }
    if(frontSide[1][0] == white || frontSide[0][1] == white || frontSide[1][2])
    {
        if(frontSide[1][0] == white)
        {
            rotateCube("L' U L");
        }
        if(frontSide[0][1] == white)
        {
            rotateCube("F R U' R' F'");
        }
        if(frontSide[1][2] == white)
        {
            rotateCube("R U R'");
        }
    }
    if(rightSide[1][0] == white || rightSide[0][1] == white || rightSide[1][2])
    {
        if(rightSide[1][0] == white)
        {
            rotateCube("F' U F");
        }
        if(rightSide[0][1] == white)
        {
            rotateCube("R B U' B' R'");
        }
        if(rightSide[1][2] == white)
        {
            rotateCube("B U B'");
        }
    }
    if(backSide[1][0] == white || backSide[0][1] == white || backSide[1][2])
    {
        if(backSide[1][0] == white)
        {
            rotateCube("L U L'");
        }
        if(backSide[0][1] == white)
        {
            rotateCube("B L U' L' B'");
        }
        if(backSide[1][2] == white)
        {
            rotateCube("R' U R");
        }
    }
    if(leftSide[1][0] == white || leftSide[0][1] == white || leftSide[1][2])
    {
        if(leftSide[1][0] == white)
        {
            rotateCube("B' U B");
        }
        if(leftSide[0][1] == white)
        {
            rotateCube("L F U' F' L'");
        }
        if(leftSide[1][2] == white)
        {
            rotateCube("F U F'");
        }
    }
    
}