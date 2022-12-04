#include <iostream>
#include "PriorityQueue.h"
using namespace std;

template<class T>
class less_cmp // Less than compare with nonpointer type
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return lVal < rVal;
	}
};

template<class T>
class less_cmp_pointer // Less than compare with pointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return ((*lVal) < (*rVal));
	}
};

template<class T>
class greater_cmp // Less than compare with nonpointer type
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return !(lVal < rVal);
	}
};

template<class T>
class greater_cmp_pointer // Less than compare with pointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return !((*lVal) < (*rVal));
	}
};

int main()
{
	cout << "Priority queue data structure test example: " << endl << endl; \

		const int SIZE = 8;
	PriorityQueue<int> que(SIZE);
	que.push(241, 3);
	que.push(32, 6);
	que.push(71, 1);
	que.push(27, 2);
	que.push(100, 4);
	que.push(52, 2);
	que.push(10, 1);
	que.push(29, 6);
	cout << "Priority queue content (Size - " << que.GetSize() << ") : " << endl;

	while (que.isEmpty() == false)
	{
		cout << "  Priority: " << que.front().getPriority();
		cout << "  Data: " << que.front().getData();
		cout << endl;

		que.pop();
	}

	cout << endl;

	if (que.isEmpty() == true)
	{
		cout << "The container is empty." << endl;
	}
	else
	{
		cout << "The container is NOT empty." << endl;
	}
	return 0;
}