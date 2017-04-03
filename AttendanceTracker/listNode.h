#ifndef LISTNODE_H
#define LISTNODE_H

#include "stack.h"

#include <ctime>
#include <string>

using std::string;

class ListNode
{
public:
	//default constructor
	ListNode(const string& newEmail = "", const int& newID = 0, const string& newLevel = "", const string& newName = "", 
			const string& newProgram =  "", const int& newRecordNum = 0, const string& newUnits = "");

	//  getters
	string getEmail()const;
	int getID()const;
	string getLevel()const;
	string getName()const;
	string getProgram()const;
	int getRecordNum()const;
	string getUnits()const;

	ListNode *& getNext();

	// setters
	void setEmail(const string& newEmail);
	void setID(const int& newID);
	void setLevel(const string& newLevel);
	void setName(const string& newName);
	void setProgram(const string& newProgram);
	void setRecordNum(const int& newRecordNum);
	void setUnits(const string& newUnits);

	void setNext(ListNode *& newNext);

private:
	ListNode *mpNext;

	string mEmail;
	int mIDNum;
	string mLevel;
	string mName;
	string mProgram;
	int mRecordNum;
	string mUnits;

	Stack<time_t> mAbsencesStack;
	int mNumAbsences;
};


#endif // !LISTNODE_H
