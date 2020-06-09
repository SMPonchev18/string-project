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