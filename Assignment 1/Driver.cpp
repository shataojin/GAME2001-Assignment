#include <iostream>
#include "UnorderedArray.h"
#include "OrderedArray.h"

using namespace std;

int main()
{
	OrderedArray<int> array(3);
	//testing expand
	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23);
	array.push(82);
	// 3, 23, 53, 82, 83

	//for expand function
	int value = 1;
	cout << "Enter the range of value: ";
	cin >> value;
	for (int i = 1; i < value; i *= 2)
	{
		array.push(i);
	}


	//array[2] = 112; // causes issues with ordered array as this changed value won't be ordered
	// 3, 23, 112, 82, 83
	//array.pop();
	// 3, 23, 112, 82
	//array.remove(2);
	// 3, 23, 82


	// show  array by order
	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;


	//cout << "Serach for 53 was found at index: ";
	//cout << array.search(53) << endl; // -1
	//cout << "Serach for 23 was found at index: ";
	//cout << array.search(23) << endl; // 1



}