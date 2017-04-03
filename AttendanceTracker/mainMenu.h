#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class MainMenu
{
public:
	// Menu Functions
	void runMenu();
	int accessInput() const;
private:
	int mMenuInput;

	// Menu Helpers
	void printMenu();
	void getInputFromUser();
};

#endif // !MAINMENU_H
