#include "list.h"
/// Member Functions
/// Public Functions
// constructor and destructor
List::List()
{
	this->mpHead = nullptr;
}

List::~List()
{
	this->deleteList();
}

// list functions
bool List::insertAtFront(ListNode *& newNode)
{
	bool success = false;
	if (newNode != nullptr)
	{
		success = true;
		newNode->setNext(this->getHead());
		this->setHead(newNode);
	}
	return success;
}

void List::deleteList()
{
	this->deleteList(this->getHead());
}

bool List::isEmpty()
{
	return (this->getHead() == nullptr);
}

void List::setHead(ListNode *& newHead)
{
	this->mpHead = newHead;
}
ListNode *& List::getHead()
{
	return this->mpHead;
}

///Private Functions
void List::deleteList(ListNode *& subList)
{
	if (subList != nullptr)
	{
		this->deleteList(subList->getNext());
		delete subList;
	}
}