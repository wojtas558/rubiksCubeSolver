#include "class.h"
#include <windows.h>
using namespace std;


void RubiksCube::makeWhiteCross()
{
    bluePiece = false, redPiece = false, greenPiece = false, orangePiece = false;
    while (bluePiece == false || redPiece == false || greenPiece == false || orangePiece == false)
    {
        whiteCrossStages();
        // if(!bluePiece )
        //     cout << "blue" << endl;
        // if(!redPiece )
        //     cout << "red" << endl;
        // if(!greenPiece )
        //     cout << "green" << endl;
        // if(!orangePiece )
        //     cout << "orange" << endl;
        // showCube();
        // Sleep(5000);
    }
    return;
}

void RubiksCube::whiteCrossStages()
{    
    if(downSide[0][1] == white || downSide[1][2] == white || downSide[2][1] == white || downSide[1][0] == white)
    {
        if(downSide[0][1] == white)
        {
            switch (frontSide[2][1])
            {
                case blue:
                    bluePiece = true;
                    break;
                case red:
                    redPiece = true;
                    rotateCube("F2 U' R2");
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("F2 U2 B2");
                    break;
                case orange:
                    orangePiece = true;
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
                    bluePiece = true;                    
                    rotateCube("R2 U F2");
                    break;
                case red:
                    redPiece = true;
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("R2 U' B2");
                    break;
                case orange:
                    orangePiece = true;
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
                    bluePiece = true;
                    rotateCube("B2 U2 F2");
                    break;
                case red:
                    redPiece = true;
                    rotateCube("B2 U R2");
                    break;
                case green:
                    greenPiece = true;
                    break;
                case orange:
                    orangePiece = true;
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
                    bluePiece = true;
                    rotateCube("L2 U' F2");
                    break;
                case red:
                    redPiece = true;
                    rotateCube("L2 U2 R2");
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("L2 U B2");
                    break;
                case orange:
                    orangePiece = true;
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
                    bluePiece = true;
                    rotateCube("U2 F2");
                    break;;
                case red:
                    redPiece = true;
                    rotateCube("U R2");
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("B2");
                    break;
                case orange:
                    orangePiece = true;
                    rotateCube("U' L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.1" << endl;
                    break;
            }
        }
        else if(topSide[1][2] == white)
        {
            switch (rightSide[0][1])
            {
                case blue:
                    bluePiece = true;
                    rotateCube("U F2");
                    break;;
                case red:
                    redPiece = true;
                    rotateCube("R2");
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("U' B2");
                    break;
                case orange:
                    orangePiece = true;
                    rotateCube("U2 L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.2" << endl;
                    break;
            }
        }
        else if(topSide[2][1] == white)
        {
            switch (frontSide[0][1])
            {
                case blue:
                    bluePiece = true;
                    rotateCube("F2");
                    break;;
                case red:
                    redPiece = true;
                    rotateCube("U' R2");
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("U2 B2");
                    break;
                case orange:
                    orangePiece = true;
                    rotateCube("U L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.3" << endl;
                    break;
            }
        }
        else if(topSide[1][0] == white)
        {
            switch (leftSide[0][1])
            {
                case blue:
                    bluePiece = true;
                    rotateCube("U' F2");
                    break;;
                case red:
                    redPiece = true;
                    rotateCube("U2 R2");
                    break;
                case green:
                    greenPiece = true;
                    rotateCube("U B2");
                    break;
                case orange:
                    orangePiece = true;
                    rotateCube("L2");
                    break;
                default:
                    cout << "Error, other color, stage 2.4" << endl;
                    break;
            }
        }
    }
    if(frontSide[1][0] == white || frontSide[0][1] == white || frontSide[1][2] == white)
    {
        if(frontSide[1][0] == white)
        {
            rotateCube("L' U L");
        }
        else if(frontSide[0][1] == white)
        {
            rotateCube("F R U' R' F'");
        }
        else if(frontSide[1][2] == white)
        {
            rotateCube("R U R'");
        }
    }
    if(rightSide[1][0] == white || rightSide[0][1] == white || rightSide[1][2] == white)
    {
        if(rightSide[1][0] == white)
        {
            rotateCube("F' U F");
        }
        else if(rightSide[0][1] == white)
        {
            rotateCube("R B U' B' R'");
        }
        else if(rightSide[1][2] == white)
        {
            rotateCube("B U B'");
        }
    }
    if(backSide[1][0] == white || backSide[0][1] == white || backSide[1][2] == white)
    {
        if(backSide[1][0] == white)
        {
            rotateCube("L U L'");
        }
        else if(backSide[0][1] == white)
        {
            rotateCube("B L U' L' B'");
        }
        else if(backSide[1][2] == white)
        {
            rotateCube("R' U R");
        }
    }
    if(leftSide[1][0] == white || leftSide[0][1] == white || leftSide[1][2] == white)
    {
        if(leftSide[1][0] == white)
        {
            rotateCube("B' U B");
        }
        else if(leftSide[0][1] == white)
        {
            rotateCube("L F U' F' L'");
        }
        else if(leftSide[1][2] == white)
        {
            rotateCube("F U F'");
        }
    }
    
}