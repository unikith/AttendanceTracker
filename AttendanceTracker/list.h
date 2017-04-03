#ifndef LIST_H
#define LIST_H

#include "listNode.h"

class List
{
public:
	// constructor and destructor
	List();
	~List();

	// list functions
	bool insertAtFront(ListNode *& newNode);
	void deleteList();
	bool isEmpty();

	void setHead(ListNode *& newHead);
	ListNode *& getHead();

private:
	ListNode * mpHead;

	void deleteList(ListNode *& subList);
};


#endif // !LIST_H
