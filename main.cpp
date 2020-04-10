#include <iostream>

using namespace std;

//Constants
const int ROWS = 4;
const int COLS = 3;

//Function Declarations
void fillScores(int[ROWS][COLS]);
//fillScores
//@param int[][] - scores of all tests from students

void printScores(int[ROWS][COLS]);
//printScores
//@param int[][] - scores of all tests from students

int main()
{

	/*int scores[][COLS] = {{80,90,90},
						  {60,70,80},
						  {40,40,20},
						  {10, 0, 0} };

	cout << scores[2][1] << endl;*/

	int scores[ROWS][COLS];

	fillScores(scores);
	printScores(scores);

	return 0;
}

//Function Definitions

void fillScores(int newScores[ROWS][COLS])
{
	int score;
	for (int i = 0; i < ROWS; i++)
	{
		cout << "Enter scores for test #" << (i + 1) << ": ";

		for (int j = 0; j < COLS; j++)
		{
			cin >> score;
			newScores[i][j] = score;
		} 

	}
}

void printScores(int newScores[ROWS][COLS])
{
	for (int i = 0; i < COLS; i++)
	{
		cout << endl << "Student " << (i + 1) << " Scores: ";

		for (int j = 0; j < ROWS; j++)
		{
			cout << newScores[j][i] << " ";
		}
	}
}