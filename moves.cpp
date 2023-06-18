#include "class.h"

void RubiksCube::R()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = frontSide[i][2];
        frontSide[i][2] = bottomSide[i][2];
        bottomSide[i][2] = backSide[((i*2)+2)%3][2];
        backSide[((i*2)+2)%3][2] = topSide[i][2];
        topSide[i][2] = temp;
    }
    temp = rightSide[0][0];
    rightSide[0][0] = rightSide[2][0];
    rightSide[2][0] = rightSide[2][2];
    rightSide[2][2] = rightSide[0][2];
    rightSide[0][2] = temp;
    temp = rightSide[1][0];
    rightSide[1][0] = rightSide[2][1];
    rightSide[2][1] = rightSide[1][2];
    rightSide[1][2] = rightSide[0][1];
    rightSide[0][1] = temp;
        
}

void RubiksCube::Rprim()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = frontSide[i][2];
        frontSide[i][2] = topSide[i][2];
        topSide[i][2] = backSide[((i*2)+2)%3][2];
        backSide[((i*2)+2)%3][2] = bottomSide[i][2];
        bottomSide[i][2] = temp;
    }
    temp = rightSide[0][0];
    rightSide[0][0] = rightSide[0][2];
    rightSide[0][2] = rightSide[2][2];
    rightSide[2][2] = rightSide[2][0];
    rightSide[2][0] = temp;
    temp = rightSide[1][0];
    rightSide[1][0] = rightSide[0][1];
    rightSide[0][1] = rightSide[1][2];
    rightSide[1][2] = rightSide[2][1];
    rightSide[2][1] = temp;
}

void RubiksCube::L()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = frontSide[i][0];
        frontSide[i][0] = topSide[i][0];
        topSide[i][0] = backSide[((i*2)+2)%3][0];
        backSide[((i*2)+2)%3][0] = bottomSide[i][0];
        bottomSide[i][0] = temp;
    }
    temp = leftSide[0][0];
    leftSide[0][0] = leftSide[2][0];
    leftSide[2][0] = leftSide[2][2];
    leftSide[2][2] = leftSide[0][2];
    leftSide[0][2] = temp;
    temp = leftSide[1][0];
    leftSide[1][0] = leftSide[2][1];
    leftSide[2][1] = leftSide[1][2];
    leftSide[1][2] = leftSide[0][1];
    leftSide[0][1] = temp;
}

void RubiksCube::Lprim()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = frontSide[i][0];
        frontSide[i][0] = bottomSide[i][0];
        bottomSide[i][0] = backSide[((i*2)+2)%3][0];
        backSide[((i*2)+2)%3][0] = topSide[i][0];
        topSide[i][0] = temp;
    }
    temp = leftSide[0][0];
    leftSide[0][0] = leftSide[0][2];
    leftSide[0][2] = leftSide[2][2];
    leftSide[2][2] = leftSide[2][0];
    leftSide[2][0] = temp;
    temp = leftSide[1][0];
    leftSide[1][0] = leftSide[0][1];
    leftSide[0][1] = leftSide[1][2];
    leftSide[1][2] = leftSide[2][1];
    leftSide[2][1] = temp;
}

void RubiksCube::U()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = frontSide[0][i];
        frontSide[0][i] = rightSide[0][i];
        rightSide[0][i] = backSide[0][((i*2)+2)%3];
        backSide[0][((i*2)+2)%3] = leftSide[0][i];
        leftSide[0][i] = temp;
    }
    temp = topSide[0][0];
    topSide[0][0] = topSide[2][0];
    topSide[2][0] = topSide[2][2];
    topSide[2][2] = topSide[0][2];
    topSide[0][2] = temp;
    temp = topSide[1][0];
    topSide[1][0] = topSide[2][1];
    topSide[2][1] = topSide[1][2];
    topSide[1][2] = topSide[0][1];
    topSide[0][1] = temp;
}

void RubiksCube::Uprim()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = frontSide[0][i];
        frontSide[0][i] = leftSide[0][i];
        leftSide[0][i] = backSide[0][((i*2)+2)%3];
        backSide[0][((i*2)+2)%3] = rightSide[0][i];
        rightSide[0][i] = temp;
    }
    temp = topSide[0][0];
    topSide[0][0] = topSide[0][2];
    topSide[0][2] = topSide[2][2];
    topSide[2][2] = topSide[2][0];
    topSide[2][0] = temp;
    temp = topSide[1][0];
    topSide[1][0] = topSide[0][1];
    topSide[0][1] = topSide[1][2];
    topSide[1][2] = topSide[2][1];
    topSide[2][1] = temp;
}

void RubiksCube::F()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = topSide[2][i];
        topSide[2][i] = leftSide[((i*2)+2)%3][2];
        leftSide[((i*2)+2)%3][2] = bottomSide[0][((i*2)+2)%3];
        bottomSide[0][((i*2)+2)%3] = rightSide[i][0];
        rightSide[i][0] = temp;
    }
    temp = frontSide[0][0];
    frontSide[0][0] = frontSide[2][0];
    frontSide[2][0] = frontSide[2][2];
    frontSide[2][2] = frontSide[0][2];
    frontSide[0][2] = temp;
    temp = frontSide[1][0];
    frontSide[1][0] = frontSide[2][1];
    frontSide[2][1] = frontSide[1][2];
    frontSide[1][2] = frontSide[0][1];
    frontSide[0][1] = temp;
}

void RubiksCube::Fprim()
{
    int temp;
    for(int i = 0;i < 3;i++)
    {
        temp = topSide[2][i];
        topSide[2][i] = rightSide[i][0];
        rightSide[i][0] = bottomSide[0][((i*2)+2)%3];
        bottomSide[0][((i*2)+2)%3] = leftSide[((i*2)+2)%3][2];
        leftSide[((i*2)+2)%3][2] = temp;
    }
    temp = frontSide[0][0];
    frontSide[0][0] = frontSide[0][2];
    frontSide[0][2] = frontSide[2][2];
    frontSide[2][2] = frontSide[2][0];
    frontSide[2][0] = temp;
    temp = frontSide[1][0];
    frontSide[1][0] = frontSide[0][1];
    frontSide[0][1] = frontSide[1][2];
    frontSide[1][2] = frontSide[2][1];
    frontSide[2][1] = temp;
}