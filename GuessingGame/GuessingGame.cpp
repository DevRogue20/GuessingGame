#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

void high_scores()
{
	int sel;
	cout << "High Score goes here..." << endl;
	cin >> sel;
	if (sel == NULL)
	{
		return;
	}
}

void guessing_game()
{	
	int sel;
	cout << "Guessing Game goes here..." << endl;
	cin >> sel;
	return;
}

void main_menu()
{
	bool run = true;
	int selection;
	while (run == true)
	{
		cout << "1 - Play Guessing Game\n2 - View High Scores\n3 - Exit" << endl;

		cin >> selection;

		if (selection == 1)
		{
			guessing_game();
		}
		else if (selection == 2)
		{
			high_scores();
		}
		else if (selection == 3)
		{
			run = false;
		}
		else
		{
			cout << "Invalid Selection. Press Enter to try again..." << endl;
			cin >> selection;
			main_menu();

		}
	}

}


int main()
{
	main_menu();
}