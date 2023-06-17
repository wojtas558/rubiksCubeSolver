#include <iostream>
#include <string>
using namespace std;

const int white = 1;
const int blue = 2;
const int red = 3;
const int green = 4;
const int orange = 5;
const int yellow = 6;

class RubiksCube
{
private:
    int whiteSide[3][3] = {0};
    int blueSide[3][3] = {0};
    int redSide[3][3] = {0};
    int greenSide[3][3] = {0}; 
    int orangeSide[3][3] = {0};
    int yellowSide[3][3] = {0};
    
    void R(), Rprim();
    void L(), Lprim();
    void F(), Fprim();
    void U(), Uprim();
public:
    RubiksCube();
    void showCube();
};

RubiksCube::RubiksCube()
{
    whiteSide[1][1] = white;    
    blueSide[1][1] = blue;
    redSide[1][1] = red;
    greenSide[1][1] = green;
    orangeSide[1][1] = orange;
    yellowSide[1][1] = yellow;

    return;
}

void RubiksCube::showCube()
{
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << blueSide[i][0] << "-" << blueSide[i][1] << "-" << blueSide[i][2];        
        cout << endl;
    }   
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << orangeSide[i][0] << "-" << orangeSide[i][1] << "-" << orangeSide[i][2] << "\t";        
        cout << whiteSide[i][0] << "-" << whiteSide[i][1] << "-" << whiteSide[i][2] << "\t";        
        cout << redSide[i][0] << "-" << redSide[i][1] << "-" << redSide[i][2];        
        cout << endl;
    }  
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << greenSide[i][0] << "-" << greenSide[i][1] << "-" << greenSide[i][2];        
        cout << endl;
    }        
    cout << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << "\t";
        cout << yellowSide[i][0] << "-" << yellowSide[i][1] << "-" << yellowSide[i][2];        
        cout << endl;
    }        
}


int main()
{
    RubiksCube cube;
    cube.showCube();    
    return 0;
}