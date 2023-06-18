#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include "consts.h"


class RubiksCube
{
private:
    int bottomSide[3][3] = {0};
    int frontSide[3][3] = {0};
    int rightSide[3][3] = {0};
    int backSide[3][3] = {0}; 
    int leftSide[3][3] = {0};
    int topSide[3][3] = {0};
    
    
    std::string showTile(int color);
    

    void R(), Rprim();
    void L(), Lprim();
    void F(), Fprim();
    void U(), Uprim();
public:
    RubiksCube();
    void showCube();
    void setCubeToSolved();
    void rotateCube(std::string moves);

    void makeWhiteCross();
};

#endif