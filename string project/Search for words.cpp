#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h";
using namespace std;

int score=0;

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
	cout << "Start collumn:" << endl;
	cin >> startCol;
	cout << "Start row:" << endl;
	cin >> startRow;
	cout << "End collumn:" << endl;
	cin >> endCol;
	cout << "End row:" << endl;
	cin >> endRow;
	found = false;
	if (number == 1)
	{
		//Seek
		if (startCol == 1 && startRow == 6 && endCol == 4 && endRow == 3)
		{
			cout << "You found 'Seek'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 4 && startRow == 1 && endCol == 7 && endRow == 4)
		{
			cout << "You found 'Find'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 0 && startRow == 1 && endCol == 0 && endRow == 6)
		{
			cout << "You found 'Random'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 4 && startRow == 9 && endCol == 9 && endRow == 9)
		{
			cout << "You found 'Sleuth'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 9 && startRow == 1 && endCol == 9 && endRow == 8)
		{
			cout << "You found 'Backward'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 1 && startRow == 0 && endCol == 8 && endRow == 0)
		{
			cout << "You found 'Vertical'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 6 && startRow == 8 && endCol == 6 && endRow == 1)
		{
			cout << "You found 'Diagonal'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 3 && startRow == 9 && endCol == 3 && endRow == 1)
		{
			cout << "You found 'Wikipedia'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 0 && startRow == 9 && endCol == 9 && endRow == 0)
		{
			cout << "You found 'Horizontal'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
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
		if (startCol == 0 && startRow == 0 && endCol == 9 && endRow == 9)
		{
			cout << "You found 'Word Search'!" << endl;
			found = true;
			score += 10;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Word Search'." << endl;
			return 0;
		}
	}
	return 0;
}
int searchMedium()
{
	int number;
	bool found;

	int   startCol = 0, startRow = 0, endCol = 0, endRow = 0;
	cout << "Please type which word you will be searching for:" << endl;
	cin >> number;
	int* a = &number;
	if (number < 1 or number>18)
	{
		while (number < 1 or number>18)
		{
			cout << "Incorrect input!" << endl;
			cout << "Please, try again." << endl;
			cin >> number;
		};
	}
	cout << "Start row:" << endl;
	cin >> startRow;
	cout << "End collumn:" << endl;
	cin >> endCol;
	cout << "End row:" << endl;
	found = false;
	if (number == 1)
	{
		//Attitude
		if (startCol == 0 && startRow == 7 && endCol == 7 && endRow == 0)
		{
			cout << "You found 'Attitude'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Attitude'." << endl;
			return 0;
		}

	}
	if (number == 2)
	{
		//Harmony
		if (startCol == 6 && startRow == 6 && endCol == 0 && endRow == 0)
		{
			cout << "You found 'Harmony'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Harmony'." << endl;
			return 0;
		}
	}
	if (number == 3)
	{
		//Love
		if (startCol == 3 && startRow == 5 && endCol == 0 && endRow == 8)
		{
			cout << "You found 'Love'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Love'." << endl;
			return 0;
		}
	}
	if (number == 4)
	{
		//Peace
		if (startCol == 8 && startRow == 9 && endCol == 12 && endRow == 13)
		{
			cout << "You found 'Peace'!" << endl;
			found = true;
			score += 20;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Peace'." << endl;
			return 0;
		}
	}
	if (number == 5)
	{
		//Powerful
		if (startCol == 0 && startRow == 9 && endCol == 7 && endRow == 9)
		{
			cout << "You found 'Powerful'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Powerful'." << endl;
			return 0;
		}
	}
	if (number == 6)
	{
		//Pure
		if (startCol == 0 && startRow == 3 && endCol == 0 && endRow == 6)
		{
			cout << "You found 'Pure'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Pure'." << endl;
			return 0;
		}
	}
	if (number == 7)
	{
		//Receptive
		if (startCol == 14 && startRow == 13 && endCol == 6 && endRow == 5)
		{
			cout << "You found 'Receptive'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Receptive'." << endl;
			return 0;
		}
	}
	if (number == 8)
	{
		//Success
		if (startCol == 8 && startRow == 14 && endCol == 14 && endRow == 8)
		{
			cout << "You found 'Success'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Success'." << endl;
			return 0;
		}
	}
	if (number == 9)
	{
		//Will-Power
		if (startCol == 9 && startRow == 0 && endCol == 1 && endRow == 8)
		{
			cout << "You found 'Will-Power'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Will-Power'." << endl;
			return 0;
		}
	}
	if (number == 10)
	{
		//Freedom
		if (startCol == 11 && startRow == 6 && endCol == 11 && endRow == 0)
		{
			cout << "You found 'Freedom'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Freedom'." << endl;
			return 0;
		}
	}
	if (number == 11)
	{
		//High-energy
		if (startCol == 12 && startRow == 0 && endCol == 12 && endRow == 9)
		{
			cout << "You found 'High-energy'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'High-energy'." << endl;
			return 0;
		}
	}
	if (number == 12)
	{
		//Motivation
		if (startCol == 11 && startRow == 8 && endCol == 2 && endRow == 8)
		{
			cout << "You found 'Motivation'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Motivation'." << endl;
			return 0;
		}
	}
	if (number == 13)
	{
		//Positive
		if (startCol == 13 && startRow == 8 && endCol == 13 && endRow == 1)
		{
			cout << "You found 'Positive'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Positive'." << endl;
			return 0;
		}
	}
	if (number == 14)
	{
		//Progress
		if (startCol == 4 && startRow == 0 && endCol == 11 && endRow == 7)
		{
			cout << "You found 'Progress'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Progress'." << endl;
			return 0;
		}
	}
	if (number == 15)
	{
		//Quality
		if (startCol == 6 && startRow == 11 && endCol == 0 && endRow == 11)
		{
			cout << "You found 'Quality'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Quality'." << endl;
			return 0;
		}
	}
	if (number == 16)
	{
		//Self-discovery
		if (startCol == 2 && startRow == 0 && endCol == 14 && endRow == 12)
		{
			cout << "You found 'Self-discovery'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Self-discovery." << endl;
			return 0;
		}
	}
	if (number == 17)
	{
		//Victory
		if (startCol == 0 && startRow == 13 && endCol == 6 && endRow == 13)
		{
			cout << "You found 'Victory'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Victory'." << endl;
			return 0;
		}
	}
	if (number == 18)
	{
		//Yourself
		if (startCol == 14 && startRow == 0 && endCol == 14 && endRow == 7)
		{
			cout << "You found 'Yourself'!" << endl;
			found = true;
			score += 20;
			cout << "Your score is :" << score << endl;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Yourself'." << endl;
			return 0;
		}
	}
	return 0;
}
