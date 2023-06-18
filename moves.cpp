#include "class.h"

void RubiksCube::R()
{
    int temp[2][3];
    for(int i = 0;i < 3;i++)
    {
        temp[0][i] = frontSide[i][2];
        frontSide[i][2] = bottomSide[i][2];
        bottomSide[i][2] = backSide[i][2];
        backSide[i][2] = topSide[i][2];
        topSide[i][2] = temp[0][i];
        
        temp[1][i] = rightSide[0][0];
        rightSide[0][0] = rightSide[2][0];
        rightSide[2][0] = rightSide[2][2];
        rightSide[2][2] = rightSide[ 
    }
        
}

void RubiksCube::Rprim()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = frontSide[i][2];
        frontSide[i][2] = topSide[i][2];
        topSide[i][2] = backSide[i][2];
        backSide[i][2] = bottomSide[i][2];
        bottomSide[i][2] = temp[i];
    }
}

void RubiksCube::L()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = frontSide[i][0];
        frontSide[i][0] = topSide[i][0];
        topSide[i][0] = backSide[i][0];
        backSide[i][0] = bottomSide[i][0];
        bottomSide[i][0] = temp[i];
    }
}

void RubiksCube::Lprim()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = frontSide[i][0];
        frontSide[i][0] = bottomSide[i][0];
        bottomSide[i][0] = backSide[i][0];
        backSide[i][0] = topSide[i][0];
        topSide[i][0] = temp[i];
    }
}

void RubiksCube::U()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = frontSide[0][i];
        frontSide[0][i] = rightSide[0][i];
        rightSide[0][i] = backSide[0][i];
        backSide[0][i] = leftSide[0][i];
        leftSide[0][i] = temp[i];
    }
}

void RubiksCube::Uprim()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = frontSide[0][i];
        frontSide[0][i] = leftSide[0][i];
        leftSide[0][i] = backSide[0][i];
        backSide[0][i] = rightSide[0][i];
        rightSide[0][i] = temp[i];
    }
}

void RubiksCube::F()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = topSide[2][i];
        topSide[2][i] = leftSide[i][2];
        leftSide[i][2] = bottomSide[0][i];
        bottomSide[0][i] = rightSide[i][0];
        rightSide[i][0] = temp[i];
    }
}

void RubiksCube::Fprim()
{
    int temp[3];
    for(int i = 0;i < 3;i++)
    {
        temp[i] = topSide[2][i];
        topSide[2][i] = rightSide[i][0];
        rightSide[i][0] = bottomSide[0][i];
        bottomSide[0][i] = leftSide[i][2];
        leftSide[i][2] = temp[i];
    }
}


// void RubiksCube::
// void RubiksCube::
// void RubiksCube::
// void RubiksCube::
// void RubiksCube::
// void RubiksCube::
// void RubiksCube::
// void RubiksCube::