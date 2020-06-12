#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h";
using namespace std;
bool Menu(int& Flag)
{
    int n = 0, difficulty = 0;
    string line, space;
    line.assign(92, '-');
    space.assign(44, ' ');
    cout << line << endl;
    cout << space << "MENU" << space << endl;
    cout << line << endl;
    cout << "1. Play" << endl;
    cout << "2. Exit" << endl;
    cin >> n;
	//Check if the person wants to play or not
    if (n < 1 or n>2)
    {
        while (n < 1 or n>2)
        {
            cout << "Incorrect input!" << endl;
            cout << "Please, try again." << endl;
            cin >> n;
        }
    }
    switch (n)
    {
    case 1:
    {
        space.assign(41, ' ');
        cout << line << endl;
        cout << space << "DIFFICULTY" << space << endl;
        cout << line << endl;
        cout << "1. Easy" << endl;
        cout << "2. Medium" << endl;
        cout << "3. Hard" << endl;
        cin >> difficulty;
		//Check if the person has chosen a difficulty properly
        if (difficulty < 1 or difficulty>3)
        {
            while (difficulty < 1 or difficulty>3)
            {
                cout << "Incorrect input!" << endl;
                cout << "Please, try again." << endl;
                cin >> difficulty;
            }
        }
        switch (difficulty)
        {
        case 1:
        {
            cout << line << endl;
            easyDifficultyBoard();
            return 0;
        }
        case 2:
        {
            cout << line << endl;
            mediumDifficultyBoard();
            return 0;
        }
        case 3:
        {
            cout << line << endl;
            hardDifficultyBoard();
            return 0;
        }
        }
        break;
    }
    case 2:
    {
        cout << "Thank you!" << endl;
        Flag = 1;
        return 0;
    }
    }
    return 0;
}