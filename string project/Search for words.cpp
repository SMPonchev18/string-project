#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h";
using namespace std;
int searchEasy()
{
	int number;
	bool found;

	int   startCol = 0, startRow = 0, endCol = 0, endRow = 0;
	cout << "Please type which word you will be searching for:" << endl;
	cin >> number;
	int* a = &number;
	if (number < 1 or number>10)
	{
		while (number < 1 or number>10)
		{
			cout << "Incorrect input!" << endl;
			cout << "Please, try again." << endl;
			cin >> number;
		};
	}
	if (number == 1)
	{
		//Seek
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 1 && startRow == 6 && endCol == 4 && endRow == 3)
		{
			cout << "You found 'Seek'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Seek'." << endl;
			return 0;
		}

	}
	if (number == 2)
	{
		//Find
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 4 && startRow == 1 && endCol == 7 && endRow == 4)
		{
			cout << "You found 'Find'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Find'." << endl;
			return 0;
		}

	}
	if (number == 3)
	{
		//Random
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 0 && startRow == 1 && endCol == 0 && endRow == 6)
		{
			cout << "You found 'Random'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Random'." << endl;
			return 0;
		}
	}
	if (number == 4)
	{
		//sleuth
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 4 && startRow == 9 && endCol == 9 && endRow == 9)
		{
			cout << "You found 'Sleuth'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Sleuth'." << endl;
			return 0;
		}
	}
	if (number == 5)
	{
		//Backward
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 9 && startRow == 1 && endCol == 9 && endRow == 8)
		{
			cout << "You found 'Backward'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Backward'." << endl;
			return 0;
		}
	}
	if (number == 6)
	{
		//Vertical
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 1 && startRow == 0 && endCol == 8 && endRow == 0)
		{
			cout << "You found 'Vertical'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Vertical'." << endl;
			return 0;
		}
	}
	if (number == 7)
	{
		//Diagonal
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 6 && startRow == 8 && endCol == 6 && endRow == 1)
		{
			cout << "You found 'Diagonal'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Diagonal'." << endl;
			return 0;
		}
	}
	if (number == 8)
	{
		//Wikipedia
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 3 && startRow == 9 && endCol == 3 && endRow == 1)
		{
			cout << "You found 'Wikipedia'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Wikipedia'." << endl;
			return 0;
		}
	}
	if (number == 9)
	{
		//Horizontal
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 0 && startRow == 9 && endCol == 9 && endRow == 0)
		{
			cout << "You found 'Horizontal'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Horizontal'." << endl;
			return 0;
		}
	}
	if (number == 10)
	{
		//Word Search
		found = false;
		cout << "Start collumn:" << endl;
		cin >> startCol;
		cout << "Start row:" << endl;
		cin >> startRow;
		cout << "End collumn:" << endl;
		cin >> endCol;
		cout << "End row:" << endl;
		cin >> endRow;
		if (startCol == 0 && startRow == 0 && endCol == 9 && endRow == 9)
		{
			cout << "You found 'Word Search'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Word Search'." << endl;
			return 0;
		}
	}

	return 0;
}
