#ifndef APPWRAPPER_H
#define APPWRAPPER_H

#include "list.h"
#include "mainMenu.h"

#include <fstream>

using std::fstream;

class AppWrapper
{
public: 

	void runApp();

private:
	MainMenu mMenu;
	List MasterList;
	fstream ClassList;
	fstream MasterListFile;

	void enactMenuChoice();
};
#endif // !APPWRAPPER_H
