#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
	srand(time(NULL));
	int optiune_utilizator;

	cout << "Choose your option to play: \n";
	cout << "1) Rock \n" << "2)Paper\n" << "3)Scissors" << endl;
	cin >> optiune_utilizator;

	int miscare = rand() % 3 + 1;

	//cout << miscare;

	if (optiune_utilizator == 1)
	{
		switch (miscare)
		{
		case 1:
			cout<< "Rock vs. Rock - draw";
			break;
		case 2:
			cout << "Rock vs. Paper - defeat";
			break;
		case 3:
			cout << "Rock vs. Scissors - win";
			break;

		}
			
	}
	else if (optiune_utilizator == 2)
	{
		switch (miscare)
		{
		case 1:
			cout << "Paper vs. Rock - win";
			break;
		case 2:
			cout << "Paper vs. Paper - draw";
			break;
		case 3:
			cout << "Paper vs. Scissors - defeat";
		}
	}
	else
	{
		switch (miscare)
		{
		case 1:
			cout << "Scissors vs. Rock - defeat";
			break;
		case 2:
			cout << "Scissors vs. Paper - win";
			break;
		case 3:
			cout << "Scissors vs. Scissors - draw";
			break;
		}
	}


	return 0;
}