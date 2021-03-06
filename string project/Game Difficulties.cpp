#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"
using namespace std;
int option;
string emptySpace;
//Function to show the easy board with letters
int easyDifficultyBoard() {
	int Flag2 = 0;
	emptySpace.assign(30, ' ');
	//Easy board with letters
	char easyBoard[10][10] = {
	{'W','V','E','R','T','I','C','A','L','L'},
	{'R','O','O','A','F','F','L','S','A','B'},
	{'A','C','R','I','L','I','A','T','O','A'},
	{'N','D','O','D','K','O','N','W','D','C'},
	{'D','R','K','E','S','O','O','D','D','K'},
	{'O','E','E','P','Z','E','G','L','I','W'},
	{'M','S','I','I','H','O','A','E','R','A'},
	{'A','L','R','K','R','R','I','R','E','R'},
	{'G','O','D','I','D','E','D','R','C','D'},
	{'H','E','L','W','S','L','E','U','T','H'}
	};
	cout << emptySpace;
	cout << "  ";
	for (int j = 0; j < 10; j++)
	{
		cout << " " << j;
		if (j < 10)
		{
			cout << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << emptySpace;
		cout << i;
		if (i < 10)
		{
			cout << " ";
		}
		for (int j = 0; j < 10; j++)
		{
			cout << " " << easyBoard[i][j] << " ";
		}
		cout << endl;
	}
	do
	{
		cout << "Options:" << endl;
		cout << "1. Show words that need to be found" << endl;
		cout << "2. Search for a word" << endl;
		cout << "3. Go back" << endl;
		cout << "Pick:" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			wordsEasy();
			break;
		}
		case 2:
		{
			searchEasy();
			break;
		}
		case 3:
		{
			Flag2 = 1;
			break;
		}
		default:
		{
			cout << "Incorrect input!" << endl;
		}
		}
		cout << endl;
	} while (Flag2 == 0);
	return 0;
};
//Function to show the medium board with letters
int mediumDifficultyBoard() {
	int Flag3 = 0;
	emptySpace.assign(22, ' ');
	//Medium board with letters
	char mediumBoard[15][15] = {
	{'Y','V','S','O','P','Q','E','E','Z','W','C','M','H','I','Y'},
	{'L','N','E','E','M','R','D','J','I','T','G','O','I','E','O'},
	{'P','J','O','Y','L','U','O','L','C','Z','R','D','G','V','U'},
	{'P','A','K','M','T','F','L','G','X','M','Y','E','H','I','R'},
	{'U','P','M','I','R','P','D','Q','R','F','Z','E','E','T','S'},
	{'R','Z','T','L','O','A','E','I','H','E','B','R','N','I','E'},
	{'E','T','O','W','I','O','H','V','S','B','S','F','E','S','L'},
	{'A','V','E','L','K','C','J','W','I','C','B','S','R','O','F'},
	{'E','R','N','O','I','T','A','V','I','T','O','M','G','P','S'},
	{'P','O','W','E','R','F','U','L','P','J','P','V','Y','S','A'},
	{'X','L','J','Z','K','G','C','K','N','E','T','E','E','G','F'},
	{'Y','T','I','L','A','U','Q','P','M','O','A','C','C','R','I'},
	{'L','M','A','T','X','X','P','Q','O','O','C','C','F','E','Y'},
	{'V','I','C','T','O','R','Y','K','T','U','X','S','E','N','R'},
	{'W','I','I','H','X','M','K','W','S','D','B','C','R','E','S'}
	};
	cout << emptySpace;
	cout << "  ";
	for (int j = 0; j < 15; j++)
	{
		cout << " " << j;
		if (j < 10)
		{
			cout << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < 15; i++)
	{
		cout << emptySpace;
		cout << i;
		if (i < 10)
		{
			cout << " ";
		}
		for (int j = 0; j < 15; j++)
		{
			cout << " " << mediumBoard[i][j] << " ";
		}
		cout << endl;
	}
	while (Flag3 == 0) {
		cout << "Options:" << endl;
		cout << "1. Show words that need to be found" << endl;
		cout << "2. Search for a word" << endl;
		cout << "3. Go back" << endl;
		cin >> option;
		cout << "Pick:" << endl;
		switch (option)
		{
		case 1:
		{
			wordsMedium();
			break;
		}
		case 2:
		{
			searchMedium();
			break;
		}
		case 3:
		{
			Flag3 = 1;
			break;
		}
		default:
		{
			cout << "Incorrect input!" << endl;
		}
		}
		cout << endl;
	};
	return 0;
};
//Function to show the hard board with letters
int hardDifficultyBoard() {
	int Flag4 = 0;
	emptySpace.assign(15, ' ');
	//Hard board with letters
	char hardBoard[20][20] = {
	{'I','S','E','M','Q','H','Z','Y','D','E','U','P','M','R','M','S','G','G','K','T'},
	{'B','A','U','Y','T','I','Z','J','X','P','R','L','O','P','E','L','H','Y','X','H'},
	{'K','R','R','J','U','R','U','P','Y','A','S','I','M','N','C','L','J','F','T','S'},
	{'L','U','U','T','Z','G','R','I','I','B','D','Q','O','W','O','D','A','W','U','N'},
	{'A','V','K','U','H','E','C','N','T','U','Z','I','Y','J','M','M','K','T','O','I'},
	{'O','P','B','T','S','R','G','A','I','T','T','S','X','X','M','M','O','S','K','W'},
	{'Q','F','A','S','O','R','O','T','C','A','F','F','J','D','U','Q','L','O','S','D'},
	{'B','M','I','S','T','L','E','F','C','Y','a','A','D','U','T','J','A','O','B','R'},
	{'W','O','D','I','S','T','R','I','B','U','T','I','V','E','A','V','U','I','Z','Z'},
	{'H','Q','O','N','K','O','K','K','P','H','Q','V','C','S','T','Y','Q','K','I','J'},
	{'X','A','B','O','O','P','C','P','J','Z','I','X','M','Q','I','A','E','W','S','Z'},
	{'C','B','T','I','I','M','H','I','F','K','X','O','L','X','V','X','E','V','T','F'},
	{'O','T','L','T','Q','P','Y','A','A','M','I','G','O','P','E','S','W','P','J','K'},
	{'L','N','L','I','R','D','S','E','I','T','R','E','P','O','R','P','V','P','E','W'},
	{'U','U','W','D','D','I','B','H','A','O','I','Y','Y','E','I','H','W','P','K','R'},
	{'M','H','N','D','B','Y','D','U','U','S','M','V','A','X','X','W','X','E','N','T'},
	{'N','J','V','A','V','K','Q','P','Z','K','V','J','E','R','M','Z','E','D','R','D'},
	{'C','W','W','K','F','E','S','P','R','O','D','U','C','T','R','C','I','V','B','P'},
	{'A','O','O','T','D','T','M','S','I','I','P','Z','U','L','F','A','W','K','V','D'},
	{'R','S','Z','Y','Q','B','U','K','B','V','S','B','A','C','M','H','Z','S','G','F'}
	};
	cout << emptySpace;
	cout << "  ";
	for (int j = 0; j < 20; j++)
	{
		cout << " " << j;
		if (j < 10)
		{
			cout << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << emptySpace;
		cout << i;
		if (i < 10)
		{
			cout << " ";
		}
		for (int j = 0; j < 20; j++)
		{
			cout << " " << hardBoard[i][j] << " ";
		}
		cout << endl;
	}
	//Showing a menu after you chose a difficulty
	do
	{
		cout << "Options:" << endl;
		cout << "1. Show words that need to be found" << endl;
		cout << "2. Search for a word" << endl;
		cout << "3. Go back" << endl;
		cout << "Pick:" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			wordsHard();
			break;
		}
		case 2:
		{
			searchHard();
			break;
		}
		case 3:
		{
			Flag4 = 1;
			break;
		}
		default:
		{
			cout << "Incorrect input!" << endl;
		}
		}
		cout << endl;
	} while (Flag4 == 0);
	return 0;
};
