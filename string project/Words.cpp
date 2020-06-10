#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h";
using namespace std;
void wordsEasy()
{
    string wordsE[11] = { "","Seek","Find","Random","Sleuth","Backward","Vertical","Diagonal","Wikipedia","Horizontal","Word Search" };
    for (int i = 1; i < 11; i++)
    {
        cout << i << ". " << wordsE[i] << endl;
    }
}
void wordsMedium()
{
    string wordsM[19] = { "","Attitude","Harmony","Love","Peace","Powerful","Pure","Receptive","Success","Will-Power",
        "Freedom","High-Energy","Motivation","Positive","Progress","Quality","Self-Discovery","Victory","Yourself" };
    for (int i = 1; i < 19; i++)
    {
        cout << i << ". " << wordsM[i] << endl;
    }
}