#include "class.h"
#include <windows.h>
using namespace std;

void RubiksCube::makeSecondLayer()
{
    bluePiece = false, redPiece = false, greenPiece = false, orangePiece = false;
    while (bluePiece == false || redPiece == false || greenPiece == false || orangePiece == false)
    {
        if(frontSide[0][1] != yellow && topSide[2][1] != yellow)
        {
            switch (frontSide[0][1])
            {
                case blue:
                    switch (topSide[2][1])
                    {
                        case red:                    
                            rotateCube("U R U' R' U' F' U F");
                            bluePiece = true;
                            break;
                        case orange:
                            rotateCube("U' L' U L U F U' F'");
                            orangePiece = true;
                            break;
                    }
                    break;            
                case red:
                    rotateCube("U'");
                    break;            
                case green:
                    rotateCube("U2");
                    break;            
                case orange:
                    rotateCube("U");
                    break;            
                default:
                    cout << "Error, second layer, 1.1";
                    break;
            }
        }
        if(rightSide[0][1] != yellow && topSide[1][2] != yellow)
        {
            switch (rightSide[0][1])
            {
                case red:
                    switch (topSide[1][2])
                    {
                        case green:
                            rotateCube("U B U' B' U' R' U R");
                            redPiece = true;
                            break;
                        case blue:                    
                            rotateCube("U' F' U F U R U' R'");
                            bluePiece = true;
                            break;
                    }
                    break;            
                case green:
                    rotateCube("U'");
                    break;            
                case orange:
                    rotateCube("U2");
                    break;            
                case blue:
                    rotateCube("U");
                    break;            
                default:
                    cout << "Error, second layer, 1.2";
                    break;
            }
        }
        if(backSide[0][1] != yellow && topSide[0][1] != yellow)
        {
            switch (backSide[0][1])
            {
                case green:
                    switch (topSide[0][1])
                    {
                        case orange:
                            rotateCube("U L U' L' U' B' U B");
                            greenPiece = true;
                            break;
                        case red:                    
                            rotateCube("U' R' U R U B U' B'");
                            redPiece = true;
                            break;
                    }
                    break;            
                case orange:
                    rotateCube("U'");
                    break;            
                case blue:
                    rotateCube("U2");
                    break;            
                case red:
                    rotateCube("U");
                    break;            
                default:
                    cout << "Error, second layer, 1.3";
                    break;
            }
        }
        if(leftSide[0][1] != yellow && topSide[1][0] != yellow)
        {
            switch (leftSide[0][1])
            {
                case orange:
                    switch (topSide[1][0])
                    {
                        case blue:
                            rotateCube("U F U' F' U' L' U L");
                            orangePiece = true;
                            break;
                        case green:                    
                            rotateCube("U' B' U B U L U' L'");
                            greenPiece = true;
                            break;
                    }
                    break;            
                case blue:
                    rotateCube("U'");
                    break;            
                case red:
                    rotateCube("U2");
                    break;            
                case green:
                    rotateCube("U");
                    break;            
                default:
                    cout << "Error, second layer, 1.4";
                    break;
            }
        }
        
        if (frontSide[1][2] == blue && rightSide[1][0] == red)
        {
            bluePiece = true;
        }
        if (rightSide[1][2] == red && backSide[1][2] == green)
        {
            redPiece = true;
        }
        if (backSide[1][0] == green && leftSide[1][0] == orange)
        {
            greenPiece = true;
        }
        if (leftSide[1][2] == orange && frontSide[1][0] == blue)
        {
            orangePiece = true;
        }
        if(frontSide[1][2] != blue || rightSide[1][0] != red && frontSide[1][2] != yellow && rightSide[1][0] != yellow)
        {
            rotateCube("U R U' R' U' F' U F");
        }
        if(rightSide[1][2] != red || backSide[1][2] != green && rightSide[1][2] != yellow && backSide[1][2] != yellow)
        {
            rotateCube("U' R' U R U B U' B'");
        }
        if(backSide[1][0] != green || leftSide[1][0] != orange && backSide[1][0] != yellow && leftSide[1][0] != yellow)
        {
            rotateCube("U L U' L' U' B' U B");
        }
        if(leftSide[1][2] != orange || frontSide[1][0] != blue && leftSide[1][2] != yellow && frontSide[1][0] != yellow)
        {
            rotateCube("U' L' U L U F U' F'");
        }
    }
    return;
}
