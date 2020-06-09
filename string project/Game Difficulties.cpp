#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"
using namespace std;
int easyDifficultyBoard() {
	int Flag2 = 0;
	int option;
	string emptySpace;
	emptySpace.assign(30, ' ');
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
		}
		cout << endl;
	} while (Flag2 == 0);

	return 0;
};
int mediumDifficultyBoard() {
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
	return 0;
};
int hardDifficultyBoard() {
	char hardBoard[20][20] = {
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'}
	};
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
	return 0;
};
int masterDifficultyBoard() {
	char masterBoard[30][30] = {
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'}
	};
	cout << "  ";
	for (int j = 0; j < 30; j++)
	{
		cout << " " << j;
		if (j < 10)
		{
			cout << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << i;
		if (i < 10)
		{
			cout << " ";
		}
		for (int j = 0; j < 30; j++)
		{
			cout << " " << masterBoard[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
};