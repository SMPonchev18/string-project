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
	char mediumBoard[20][20] = {
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
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'},
	{'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'}
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