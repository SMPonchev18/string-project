#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h";
using namespace std;
int score = 0, index, number;
bool found;
int startCol = 0, startRow = 0, endCol = 0, endRow = 0;
int foundLengthEasy = 0, foundWordsEasy[10];
int foundLengthMedium = 0, foundWordsMedium[19];
int foundLengthHard = 0, foundWordsHard[18 ];
int searchEasy()
{
	if (foundLengthEasy == 9)
	{
		cout << "Congratulations!" << endl;
		cout << "You have found all the words in this level." << endl;
	}
	cout << "Please type which word you will be searching for:" << endl;
	cin >> number;
	if (number < 1 or number>10)
	{
		while (number < 1 or number>10)
		{
			cout << "Incorrect input!" << endl;
			cout << "Please, try again." << endl;
			cin >> number;
		};
	}
	for (int i = 0; i <= foundLengthEasy; i++)
	{
		if (number == foundWordsEasy[i])
		{
			cout << "You have already found this word." << endl;
			return 0;
		}
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
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Seek'." << endl;
		}
	}
	if (number == 2)
	{
		//Find
		if (startCol == 4 && startRow == 1 && endCol == 7 && endRow == 4)
		{
			cout << "You found 'Find'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Find'." << endl;
		}

	}
	if (number == 3)
	{
		//Random
		if (startCol == 0 && startRow == 1 && endCol == 0 && endRow == 6)
		{
			cout << "You found 'Random'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Random'." << endl;
		}
	}
	if (number == 4)
	{
		//sleuth
		if (startCol == 4 && startRow == 9 && endCol == 9 && endRow == 9)
		{
			cout << "You found 'Sleuth'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Sleuth'." << endl;
		}
	}
	if (number == 5)
	{
		//Backward
		if (startCol == 9 && startRow == 1 && endCol == 9 && endRow == 8)
		{
			cout << "You found 'Backward'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Backward'." << endl;
		}
	}
	if (number == 6)
	{
		//Vertical
		if (startCol == 1 && startRow == 0 && endCol == 8 && endRow == 0)
		{
			cout << "You found 'Vertical'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Vertical'." << endl;
		}
	}
	if (number == 7)
	{
		//Diagonal
		if (startCol == 6 && startRow == 8 && endCol == 6 && endRow == 1)
		{
			cout << "You found 'Diagonal'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Diagonal'." << endl;
		}
	}
	if (number == 8)
	{
		//Wikipedia
		if (startCol == 3 && startRow == 9 && endCol == 3 && endRow == 1)
		{
			cout << "You found 'Wikipedia'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Wikipedia'." << endl;
		}
	}
	if (number == 9)
	{
		//Horizontal
		if (startCol == 0 && startRow == 9 && endCol == 9 && endRow == 0)
		{
			cout << "You found 'Horizontal'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Horizontal'." << endl;
		}
	}
	if (number == 10)
	{
		//Word Search
		if (startCol == 0 && startRow == 0 && endCol == 9 && endRow == 9)
		{
			cout << "You found 'Word Search'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Word Search'." << endl;
		}
	}
	if (found == true)
	{
		score += 10;
		index = foundLengthEasy;
		foundWordsEasy[index] = number;
		foundLengthEasy++;
	}
	cout << "Your score is: " << score << endl;
	return 0;
}
int searchMedium()
{
	if (foundLengthMedium == 17)
	{
		cout << "Congratulations!" << endl;
		cout << "You have found all the words in this level." << endl;
	}
	cout << "Please type which word you will be searching for:" << endl;
	cin >> number;
	if (number < 1 or number>18)
	{
		while (number < 1 or number>18)
		{
			cout << "Incorrect input!" << endl;
			cout << "Please, try again." << endl;
			cin >> number;
		};
	}
	for (int i = 0; i <= foundLengthMedium; i++)
	{
		if (number == foundWordsMedium[i])
		{
			cout << "You have already found this word." << endl;
			return 0;
		}
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
		//Attitude
		if (startCol == 0 && startRow == 7 && endCol == 7 && endRow == 0)
		{
			cout << "You found 'Attitude'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Attitude'." << endl;
		}

	}
	if (number == 2)
	{
		//Harmony
		if (startCol == 6 && startRow == 6 && endCol == 0 && endRow == 0)
		{
			cout << "You found 'Harmony'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Harmony'." << endl;
		}
	}
	if (number == 3)
	{
		//Love
		if (startCol == 3 && startRow == 5 && endCol == 0 && endRow == 8)
		{
			cout << "You found 'Love'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Love'." << endl;
		}
	}
	if (number == 4)
	{
		//Peace
		if (startCol == 8 && startRow == 9 && endCol == 12 && endRow == 13)
		{
			cout << "You found 'Peace'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Peace'." << endl;
		}
	}
	if (number == 5)
	{
		//Powerful
		if (startCol == 0 && startRow == 9 && endCol == 7 && endRow == 9)
		{
			cout << "You found 'Powerful'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Powerful'." << endl;
		}
	}
	if (number == 6)
	{
		//Pure
		if (startCol == 0 && startRow == 3 && endCol == 0 && endRow == 6)
		{
			cout << "You found 'Pure'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Pure'." << endl;
		}
	}
	if (number == 7)
	{
		//Receptive
		if (startCol == 14 && startRow == 13 && endCol == 6 && endRow == 5)
		{
			cout << "You found 'Receptive'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Receptive'." << endl;
		}
	}
	if (number == 8)
	{
		//Success
		if (startCol == 8 && startRow == 14 && endCol == 14 && endRow == 8)
		{
			cout << "You found 'Success'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Success'." << endl;
		}
	}
	if (number == 9)
	{
		//Will-Power
		if (startCol == 9 && startRow == 0 && endCol == 1 && endRow == 8)
		{
			cout << "You found 'Will-Power'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Will-Power'." << endl;
		}
	}
	if (number == 10)
	{
		//Freedom
		if (startCol == 11 && startRow == 6 && endCol == 11 && endRow == 0)
		{
			cout << "You found 'Freedom'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Freedom'." << endl;
		}
	}
	if (number == 11)
	{
		//High-energy
		if (startCol == 12 && startRow == 0 && endCol == 12 && endRow == 9)
		{
			cout << "You found 'High-energy'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'High-energy'." << endl;
		}
	}
	if (number == 12)
	{
		//Motivation
		if (startCol == 11 && startRow == 8 && endCol == 2 && endRow == 8)
		{
			cout << "You found 'Motivation'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Motivation'." << endl;
		}
	}
	if (number == 13)
	{
		//Positive
		if (startCol == 13 && startRow == 8 && endCol == 13 && endRow == 1)
		{
			cout << "You found 'Positive'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Positive'." << endl;
		}
	}
	if (number == 14)
	{
		//Progress
		if (startCol == 4 && startRow == 0 && endCol == 11 && endRow == 7)
		{
			cout << "You found 'Progress'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Progress'." << endl;
		}
	}
	if (number == 15)
	{
		//Quality
		if (startCol == 6 && startRow == 11 && endCol == 0 && endRow == 11)
		{
			cout << "You found 'Quality'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Quality'." << endl;
		}
	}
	if (number == 16)
	{
		//Self-discovery
		if (startCol == 2 && startRow == 0 && endCol == 14 && endRow == 12)
		{
			cout << "You found 'Self-discovery'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Self-discovery." << endl;
		}
	}
	if (number == 17)
	{
		//Victory
		if (startCol == 0 && startRow == 13 && endCol == 6 && endRow == 13)
		{
			cout << "You found 'Victory'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Victory'." << endl;
		}
	}
	if (number == 18)
	{
		//Yourself
		if (startCol == 14 && startRow == 0 && endCol == 14 && endRow == 7)
		{
			cout << "You found 'Yourself'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Yourself'." << endl;
		}
	}
	if (found == true)
	{
		score += 20;
		index = foundLengthMedium;
		foundWordsMedium[index] = number;
		foundLengthMedium++;
	}
	cout << "Your score is: " << score << endl;
	return 0;
}
int searchHard()
{
	if (foundLengthHard == 16)
	{
		cout << "Congratulations!" << endl;
		cout << "You have found all the words in this level." << endl;
	}
	cout << "Please type which word you will be searching for:" << endl;
	cin >> number;
	if (number < 1 or number>17)
	{
		while (number < 1 or number>17)
		{
			cout << "Incorrect input!" << endl;
			cout << "Please, try again." << endl;
			cin >> number;
		};
	}
	for (int i = 0; i <= foundLengthHard; i++)
	{
		if (number == foundWordsHard[i])
		{
			cout << "You have already found this word." << endl;
			return 0;
		}
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
		//Addition
		if (startCol == 3 && startRow == 16 && endCol == 3 && endRow == 9)
		{
			cout << "You found 'Addition'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Addition'." << endl;
		}

	}
	if (number == 2)
	{
		//Commutative
		if (startCol == 14 && startRow == 2 && endCol == 14 && endRow == 12)
		{
			cout << "You found 'Commutative'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Commutative'." << endl;
		}
	}
	if (number == 3)
	{
		//Expression
		if (startCol == 9 && startRow == 0 && endCol == 0 && endRow == 9)
		{
			cout << "You found 'Expression'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Expression'." << endl;
		}
	}
	if (number == 4)
	{
		//Product
		if (startCol == 7 && startRow == 17 && endCol == 13 && endRow == 17)
		{
			cout << "You found 'Product'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Product'." << endl;
		}
	}
	if (number == 5)
	{
		//Multiplication
		if (startCol == 0 && startRow == 15 && endCol == 13 && endRow == 2)
		{
			cout << "You found 'Multiplication'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Multiplication'." << endl;
		}
	}
	if (number == 6)
	{
		//Array
		if (startCol == 15 && startRow == 18 && endCol == 11 && endRow == 14)
		{
			cout << "You found 'Array'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Array'." << endl;
		}
	}
	if (number == 7)
	{
		//Distributive
		if (startCol == 2 && startRow == 8 && endCol == 13 && endRow == 8)
		{
			cout << "You found 'Distributive'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Distributive'." << endl;
		}
	}
	if (number == 8)
	{
		//Groups
		if (startCol == 11 && startRow == 12 && endCol == 6 && endRow == 17)
		{
			cout << "You found 'Groups'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Groups'." << endl;
		}
	}
	if (number == 9)
	{
		//Properties
		if (startCol == 15 && startRow == 13 && endCol == 6 && endRow == 13)
		{
			cout << "You found 'Properties'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Properties'." << endl;
		}
	}
	if (number == 10)
	{
		//Associative
		if (startCol == 2 && startRow == 6 && endCol == 12 && endRow == 16)
		{
			cout << "You found 'Associative'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Associative'." << endl;
		}
	}
	if (number == 11)
	{
		//Equal
		if (startCol == 16 && startRow == 10 && endCol == 16 && endRow == 6)
		{
			cout << "You found 'Equal'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Equal'." << endl;
		}
	}
	if (number == 12)
	{
		//Related
		if (startCol == 13 && startRow == 0 && endCol == 19 && endRow == 6)
		{
			cout << "You found 'Related'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Related'." << endl;
		}
	}
	if (number == 13)
	{
		//Repeated
		if (startCol == 19 && startRow == 14 && endCol == 12 && endRow == 7)
		{
			cout << "You found 'Repeated'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Repeated'." << endl;
		}
	}
	if (number == 14)
	{
		//Column
		if (startCol == 0 && startRow == 11 && endCol == 0 && endRow == 16)
		{
			cout << "You found 'Column'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Column'." << endl;
		}
	}
	if (number == 15)
	{
		//Row
		if (startCol == 0 && startRow == 19 && endCol == 2 && endRow == 17)
		{
			cout << "You found 'Row'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Row'." << endl;
		}
	}
	if (number == 16)
	{
		//Factor
		if (startCol == 10 && startRow == 6 && endCol == 5 && endRow == 6)
		{
			cout << "You found 'Factor'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Factor'." << endl;
		}
	}
	if (number == 17)
	{
		//Equation
		if (startCol == 5 && startRow == 17 && endCol == 12 && endRow == 10)
		{
			cout << "You found 'Equation'!" << endl;
			found = true;
		}
		if (found == false)
		{
			cout << "Sorry, you didn't find 'Equation'." << endl;
		}
	}
	if (found == true)
	{
		score += 30;
		index = foundLengthHard;
		foundWordsHard[index] = number;
		foundLengthHard++;
	}
	cout << "Your score is: " << score << endl;
	return 0;
}
