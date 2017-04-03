#include "listNode.h"

/// Member Functions
///Public Funtions
//default constructor
ListNode::ListNode(const string& newEmail, const int& newID, const string& newLevel, const string& newName,
	const string& newProgram, const int& newRecordNum, const string& newUnits)
{
	this->mEmail = newEmail;
	this->setID(newID); // called because possible values are limited for ID
	this->mLevel = newLevel;
	this->mName = newName;
	this->mProgram = newProgram;
	this->setRecordNum(newRecordNum); //called because possible values are limited for RecordNum
	this->mUnits = newUnits;
}

//  getters
string ListNode::getEmail()const
{
	return this->mEmail;
}

int ListNode::getID()const
{
	return this->mIDNum;
}

string ListNode::getLevel()const
{
	return this->mLevel;
}

string ListNode::getName()const
{
	return this->mName;
}

string ListNode::getProgram()const
{
	return this->mProgram;
}

int ListNode::getRecordNum()const
{
	return this->mRecordNum;
}

string ListNode::getUnits()const
{
	return this->mUnits;
}

ListNode *& ListNode::getNext()
{
	return this->mpNext;
}

// setters
void ListNode::setEmail(const string& newEmail)
{
	this->mEmail = newEmail;
}

void ListNode::setID(const int& newID)
{
	if (newID < 1000000000 && newID > 0) // less than 10 digits and not negative or 0
	{
		this->mIDNum = newID;
	}
	else
	{
		this->mIDNum = 0; // used to indicate invalid value
	}
}

void ListNode::setLevel(const string& newLevel)
{
	this->mLevel = newLevel;
}

void ListNode::setName(const string& newName)
{
	this->mName = newName;
}

void ListNode::setProgram(const string& newProgram)
{
	this->mProgram = newProgram;
}

void ListNode::setRecordNum(const int& newRecordNum)
{
	if (newRecordNum < 1000 && newRecordNum > 0) // less than 4 digits and not negative or 0
	{
		this->mRecordNum = newRecordNum;
	}
	else
	{
		this->mRecordNum = 0; // used to indicate invalid value
	}
}

void ListNode::setUnits(const string& newUnits)
{
	this->mUnits = newUnits;
}

void ListNode::setNext(ListNode *& newNext)
{
	this->mpNext = newNext;
}