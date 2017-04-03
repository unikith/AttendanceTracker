#include "mainMenu.h"
/// Member Functions
/// Public Functions
// Menu Functions
void MainMenu::runMenu()
{
	this->printMenu();
	this->getInputFromUser();
}

int MainMenu::accessInput() const
{
	return this->mMenuInput;
}

/// Private Functions
void MainMenu::printMenu()
{
	cout << "Main Menu" << endl;
	cout << "-----------------------" << endl;
	cout << "1. Import course list" << endl;
	cout << "2. Load master list" << endl;
	cout << "3. Store master list" << endl;
	cout << "4. Mark absences" << endl;
	cout << "5. BONUS: Edit absences" << endl;
	cout << "6. Generate report" << endl;
	cout << "7. Exit" << endl;
}

void MainMenu::getInputFromUser()
{
	do
	{
		cin >> this->mMenuInput;
	} while (this->mMenuInput > 7 || this->mMenuInput < 1);
}