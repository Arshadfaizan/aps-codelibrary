
#include <bits/stdc++.h>
template <class X>
class Queue {

private:
	int frontIndex;
	int backIndex;
	X* arr;
	int sizeVar;
	int capacityVar = 4;

public:
	Queue()
	{
		arr = new X[capacityVar];
		frontIndex = backIndex = -1;
		sizeVar = 0;
	}

	// Function Methods
	bool empty();
	bool full();
	void push(X x);
	void pop();
	X front();
	X back();
	int capacity();
	int size();
};

template <class X>
int Queue<X>::capacity()
{
	return capacityVar;
}

template <class X>
int Queue<X>::size()
{
	return sizeVar;
}

// Function to check if
// Queue is empty or not
template <class X>
bool Queue<X>::empty()
{
	if (frontIndex == -1
		&& backIndex == -1)
		return true;
	else
		return false;
}

template <class X>
bool Queue<X>::full()
{
	if (sizeVar == capacityVar)
		return true;
	else
		return false;
}

template <class X>
X Queue<X>::front()
{

	if (empty()) {
		cout << "Queue underflow"
			<< endl;
		abort();
	}

	return arr[frontIndex];
}


template <class X>
X Queue<X>::back()
{
	if (empty()) {
		cout << "Queue underflow"
			<< endl;
		abort();
	}
	return arr[backIndex];
}

template <class X>
void Queue<X>::push(X x)
{
	if (full()) {

		capacityVar = capacityVar * 2;


		X* temp = new X[capacityVar];


		for (int i = 0; i < sizeVar; i++)
			temp[i] = arr[i];


		delete[] arr;
		arr = temp;
	}

	if (empty()) {

		frontIndex = backIndex = 0;
		arr[backIndex] = x;
		sizeVar++;
		return;
	}

	// Increment the backIndex
	backIndex = (backIndex + 1) % capacityVar;
	arr[backIndex] = x;
	sizeVar++;

	return;
}


template <class X>
void Queue<X>::pop()
{

	if (empty()) {
		cout << "Queue underflow"
			<< endl;
		abort();
	}

	if (frontIndex == backIndex) {
r
		frontIndex = backIndex = -1;
		sizeVar--;
		return;
	}

	frontIndex = (frontIndex + 1) % capacityVar;
	sizeVar--;

	return;
}


int main()
{

	Queue<int> q;

	for (int i = 1; i < 100; i++)
		q.push(i);
	cout << "Current capacity "
		<< q.capacity() << endl;

	cout << "Current size "
		<< q.size() << endl;
	cout << "Front element "
		<< q.front() << endl;

	cout << "Rear element "
		<< q.back() << endl;
	cout << endl;
	cout << "Pop an element" << endl;
	q.pop();
	cout << "Pop an element" << endl;
	q.pop();
	cout << endl;
	cout << "Current capacity "
		<< q.capacity() << endl;
	cout << "Current size "
		<< q.size() << endl;
	cout << "Front element "
		<< q.front() << endl;

	cout << "Rear element "
		<< q.back() << endl;

	return 0;
}
