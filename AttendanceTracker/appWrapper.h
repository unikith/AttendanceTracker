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

	// Functions that control major tasks
	void importCourseList();
	void loadMasterList();
	void saveMasterList();
	void markAbsences();
	void editAbsences();
	void generateReport();
	void exit();
};
#endif // !APPWRAPPER_H
