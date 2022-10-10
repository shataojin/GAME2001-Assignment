#include <iostream>
#include "UnorderedArray.h"
#include "OrderedArray.h"

using namespace std;

int main()
{
	OrderedArray<int> array(3);
	//testing expand
	array.push(8);
	array.push(2);
	array.push(3);
	array.push(10);
	array.push(5);
	array.push(6);
	array.push(7);
	array.push(8);

	//for expand function
	int value = 1;
	cout << "Enter the range of value: ";
	cin >> value;
	for (int i = 1; i < value; i *= 2)
	{
		array.push(i);
	}


	/*array[2] = 112; */// causes issues with ordered array as this changed value won't be ordered
	// 3, 23, 112, 82, 83
	//array.pop();
	// 3, 23, 112, 82
	/*array.remove(3);*/
	// 3, 23, 82
	

	// show  array by order
	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		if (array[i] = array[i+1])
		{
			array.remove(i);
		}
		cout << array[i] << " ";
	}

	cout << endl;


	int number;
	cout << "Serach for what number at index: ";
	cin >> number;
	cout << "Serach for "<< number <<
		" was found at index : ";
	cout << array.search(number) << endl; // -1
	



}