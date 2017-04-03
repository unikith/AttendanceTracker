#ifndef STACK_H
#define STACK_H
template <class T>
class Stack
{
public:
	//constructor and destructors
	Stack(int newMaxSize = 100); // default constructor
	~Stack(); // destructor

	// Stack Functions
	bool push(const T& newData); // returns success or failure
	bool pop(T& poppedData); // returns success or failure and output parameters the removed data
	bool peek(T& peekedData) const; // returns success or failure and output parameters the data on top

	bool isEmpty() const; // returns a bool
	int getSize() const; // returns the size

private:
	T* mpTop;
	int mMaxSize;
	int mSize;
};

///Member Functions
///public funsiotnss
// constructor and destructor
template <class T>
Stack<T>::Stack(int newMaxSize = 100) // default constructor
{
	this->mMaxSize = newMaxSize;
	this->mpTop = new T[mMaxSize];
	this->mSize = 0;
}

template <class T>
Stack<T>::~Stack() // destructor
{
	delete[] this->mpTop; // deallocates the stack on the heap
}

// stack functions
template <class T>
bool Stack<T>::push(const T& newData)
{
	bool success = false;
	if (this->mSize < this->mMaxSize) // room left in array
	{
		success = true;
		this->mpTop[mSize] = newItem;
		this->mSize++;
	}
	return success;
}

template <class T>
bool Stack<T>::pop(T& poppedData)
{
	bool success = false;
	if (!this->isEmpty())
	{
		poppedData = this->mpTop[mSize];
		success = true;
		this->mSize--;
	}
	return success;
}

template <class T>
bool Stack<T>::isEmpty() const
{
	bool success = false;
	if (this->mSize == 0) // empty
	{
		success = true;
	}
	return success;
}

template <class T>
bool Stack<T>::peek(T& peekedData) const
{
	bool success = false;
	if (!this->isEmpty())
	{
		peekedData = this->mpTop[mSize];
		success = true;
	}
	return success;
}

template <class T>
int Stack<T>::getSize() const
{
	return this->mSize;
}
#endif // !STACK_H