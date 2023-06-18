#include "class.h"
using namespace std;


void RubiksCube::makeWhiteCross()
{
    bool blueSideTile = false, redSideTile = false, greenSideTile = false, bool orangeSideTile = false;
    if(bottomSide[0][1] == white || bottomSide[1][2] == white || bottomSide[2][1] == white || bottomSide[1][0] == white)
    {
        if(bottomSide[0][1] == white)
        {
            switch (frontSide[2][1])
            {
            case blue:
                blueSideTile = true;
                break;
            case red:
                redSideTile = true;
                move("F2 U' R2");
                break;
            case green:
                greenSideTile = true;
                move("F2 U2 ");
                break;
            case orange:
                orangeSideTile = true;
                move("F2 U' R2");
                break;
            
            default:
                cout << "Error, other color" << endl;
                break;
            }
        }
    }
}