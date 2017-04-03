#include "appWrapper.h"

/// Member Functions
/// Public Functions
void AppWrapper::runApp()
{
	do
	{
		this->mMenu.runMenu();
		this->enactMenuChoice();
	} while (this->mMenu.accessInput() != 7); // != Exit
}

 /// Private Functions
void AppWrapper::enactMenuChoice()
{
	switch (this->mMenu.accessInput())
	{
	case 1: // 1. Import course list
		cout << "To Impliment" << endl; 
		break;
	case 2: // 2. Load master list
		cout << "To Impliment" << endl;
		break;
	case 3: // 3. Store master list
		cout << "To Impliment" << endl;
		break;
	case 4: // 4. Mark absences
		cout << "To Impliment" << endl;
		break;
	case 5: // 5. BONUS: Edit absences
		cout << "To Impliment" << endl;
		break;
	case 6: // 6. Generate report
		cout << "To Impliment" << endl;
		break;
	case 7: // 7. Exit
		cout << "To Impliment" << endl;
		break;
	default:
		cout << "Some Internal Error has Occured. My bad." << endl;
		break;
	}
}