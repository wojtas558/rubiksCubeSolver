#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include "consts.h"


class RubiksCube
{
private:
    int downSide[3][3] = {0};
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
    void B(), Bprim();
    void D(), Dprim();  

    bool bluePiece, redPiece, greenPiece, orangePiece;
    void makeWhiteCross();
    void whiteCrossStages();

    void makeFirstLayer();
    void firstLayerStages();

    void makeSecondLayer();
public:
    RubiksCube(int front = blue, int top = yellow);
    void showCube();
    void setCubeToSolved(int front, int top);
    void rotateCube(std::string moves);

    void solveCube();
};

#endif