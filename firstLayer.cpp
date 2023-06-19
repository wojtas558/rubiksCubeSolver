#include "class.h"
#include "windows.h"
using namespace std;

void RubiksCube::makeFirstLayer()
{
    bluePiece = false, redPiece = false, greenPiece = false, orangePiece = false;
    while (bluePiece == false || redPiece == false || greenPiece == false || orangePiece == false)
    {
        firstLayerStages();
        // if(!bluePiece )
        //     cout << "blue" << endl;
        // if(!redPiece )
        //     cout << "red" << endl;
        // if(!greenPiece )
        //     cout << "green" << endl;
        // if(!orangePiece )
        //     cout << "orange" << endl;
        // showCube();
        // Sleep(1500);
    }
    return;
}

void RubiksCube::firstLayerStages()
{
    int temp;
    if(downSide[0][0] == white || downSide[0][2] == white || downSide[2][0] == white || downSide[2][2] == white)
    {
        if(downSide[0][0] == white)
        {
            temp = (10 * leftSide[2][2]) + frontSide[2][0];
            switch (temp)
            {
            case 23://blue + red
                rotateCube("L' U' L R U R'");
                bluePiece = true;
                break;
            case 34://red + green
                rotateCube("L' U' L U' B U B'");
                redPiece = true;
                break;
            case 45://green + orange
                rotateCube("L' U L U2 L U' L'");
                greenPiece = true;
                break;
            case 52://orange + blue
                orangePiece = true;
                break;
            default:
                cout << "Error, wrong number, stage 1.1" << endl;
                break;
            }
        }
        if(downSide[0][2] == white)
        {
            temp = (10 * frontSide[2][2]) + rightSide[2][0];
            switch (temp)
            {
            case 23://blue + red
                bluePiece = true;
                break;
            case 34://red + green
                rotateCube("R U' R' U' B U B'");
                redPiece = true;
                break;
            case 45://green + orange
                rotateCube("L R U2 R' L'");
                greenPiece = true;
                break;
            case 52://orange + blue
                rotateCube("F R U R' F'");
                orangePiece = true;
                break;
            default:
                cout << "Error, wrong number, stage 1.2" << endl;
                break;
            }
        }
        if(downSide[2][0] == white)
        {
            temp = (10 * backSide[2][0]) + leftSide[2][0];
            switch (temp)
            {
            case 23://blue + red
                rotateCube("B' U2 B R U R'");
                bluePiece = true;
                break;
            case 34://red + green
                rotateCube("B' U' B R' U2 R");
                redPiece = true;
                break;
            case 45://green + orange
                greenPiece = true;
                break;
            case 52://orange + blue
                rotateCube("B' U' B F U F'");
                orangePiece = true;
                break;
            default:
                cout << "Error, wrong number, stage 1.3" << endl;
                break;
            }
        }
        if(downSide[2][2] == white)
        {
            temp = (10 * rightSide[2][2]) + backSide[2][2];
            switch (temp)
            {
            case 23://blue + red
                rotateCube("B U2 B' R U' R'");
                bluePiece = true;
                break;
            case 34://red + green                
                redPiece = true;
                break;
            case 45://green + orange
                rotateCube("B U2 B' U B' U' B");
                greenPiece = true;
                break;
            case 52://orange + blue
                rotateCube("B U2 B' L' U' L");
                orangePiece = true;
                break;
            default:
                cout << "Error, wrong number, stage 1.4" << endl;
                break;
            }
        }
    }
    if(topSide[0][0] == white || topSide[0][2] == white || topSide[2][0] == white || topSide[2][2] == white)
    {
        //yellow side
        if(topSide[0][0] == white)
        {
            if(downSide[2][0] != white)
            {
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
            else if(downSide[2][2] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
            else if(downSide[0][2] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }
        }
        else if(topSide[0][2] == white)
        {            
            if(downSide[2][2] != white)
            {
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
            else if(downSide[0][2] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
        }
        else if(topSide[2][2] == white)
        {            
            if(downSide[0][2] != white)
            {
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
            else if(downSide[2][2] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
        }
        else if(topSide[2][0] == white)
        {    
            if(downSide[0][0] != white)
            {
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
            else if(downSide[2][2] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }        
            else if(downSide[0][2] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 3; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }
        }
    }
    if(frontSide[2][2] == white || rightSide[2][0] == white)
    {
        if(frontSide[2][2] == white)
        {
            for(int i = 0; i < 4;i++)
            {
                rotateCube("R U R' U'");
            }
        }
        else if(rightSide[2][0] == white)
        {
            for(int i = 0; i < 2;i++)
            {
                rotateCube("R U R' U'");
            }
        }
    }
    if(rightSide[2][2] == white || backSide[2][2] == white)
    {
        if(rightSide[2][2] == white)
        {
            for(int i = 0; i < 4;i++)
            {
                rotateCube("B U B' U'");
            }
        }
        else if(backSide[2][2] == white)
        {
            for(int i = 0; i < 2;i++)
            {
                rotateCube("B U B' U'");
            }
        }
    }
    if(backSide[2][0] == white || leftSide[2][0] == white)
    {
        if(backSide[2][0] == white)
        {
            for(int i = 0; i < 4;i++)
            {
                rotateCube("L U L' U'");
            }
        }
        else if(leftSide[2][0] == white)
        {
            for(int i = 0; i < 2;i++)
            {
                rotateCube("L U L' U'");
            }
        }
    }
    if(leftSide[2][2] == white || frontSide[2][0] == white)
    {
        if(leftSide[2][2] == white)
        {
            for(int i = 0; i < 4;i++)
            {
                rotateCube("F U F' U'");
            }
        }
        else if(frontSide[2][0] == white)
        {
            for(int i = 0; i < 2;i++)
            {
                rotateCube("F U F' U'");
            }
        }
    }
    if(frontSide[0][2] == white || rightSide[0][0] == white || rightSide[0][2] == white || backSide[0][2] == white || backSide[0][0] == white || leftSide[0][0] == white || leftSide[0][2] == white || frontSide[0][0] == white)
    {
        if(frontSide[0][2] == white)
        {
            if(downSide[0][2] != white)
            {
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }
            else if(downSide[2][2] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }
        }
        else if(rightSide[0][0] == white)
        {
            if(downSide[0][2] != white)
            {
                rotateCube("R U R' U'");            
            }
            else if(downSide[2][2] != white)
            {
                rotateCube("U' B U B' U'");
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U2 L U L' U'");
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U F U F' U'");
            }
        }
        else if(rightSide[0][2] == white)
        {
            if(downSide[2][2] != white)
            {
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }            
            else if(downSide[0][2] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }
        }
        else if(backSide[0][2] == white)
        {            
            if(downSide[2][2] != white)
            {
                rotateCube("B U B' U'");
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U' L U L' U'");
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U2 F U F' U'");
            }
            if(downSide[0][2] != white)
            {
                rotateCube("U R U R' U'");            
            }
        }
        else if(backSide[0][0] == white)
        {
            if(downSide[2][0] != white)
            {
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }            
            else if(downSide[0][2] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }            
            else if(downSide[2][2] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
        }
        else if(leftSide[0][0] == white)
        {    
            if(downSide[2][0] != white)
            {
                rotateCube("L U L' U'");
            }
            else if(downSide[0][0] != white)
            {
                rotateCube("U' F U F' U'");
            }
            if(downSide[0][2] != white)
            {
                rotateCube("U2 R U R' U'");            
            }        
            else if(downSide[2][2] != white)
            {
                rotateCube("U B U B' U'");
            }
        }
        else if(leftSide[0][2] == white)
        {
            if(downSide[0][0] != white)
            {
                rotateCube("U'");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("F U F' U'");
                }                
            }            
            else if(downSide[0][2] != white)
            {
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("R U R' U'");
                }                
            }            
            else if(downSide[2][2] != white)
            {
                rotateCube("U2");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("B U B' U'");
                }                
            }
            else if(downSide[2][0] != white)
            {
                rotateCube("U");
                for (int i = 0; i < 5; i++)
                {
                    rotateCube("L U L' U'");
                }                
            }
        }
        else if(frontSide[0][0] == white)
        {  
            if(downSide[0][0] != white)
            {
                rotateCube("F U F' U'");
            }
            if(downSide[0][2] != white)
            {
                rotateCube("U' R U R' U'");            
            }        
            else if(downSide[2][2] != white)
            {
                rotateCube("U2 B U B' U'");
            }              
            if(downSide[2][0] != white)
            {
                rotateCube("U L U L' U'");
            }
        }
    }
    
}
