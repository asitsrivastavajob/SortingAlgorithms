#include "stdafx.h"

#if 0
#include <iostream>
using namespace std;
//Comparing the adjecent elements
void bubbleSort(int arr[], int size)
{
	int temp = 0;
	int flag = 0;
	for (int i=0;i<size-1;i++)
	{
		flag = 0;  // added to make bubble sort adaptive
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "The array is already sorted" << endl;
			break;
		}
	}
}

void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	cout << "Bubble Sort" << endl;
	int arr[] = { 3,7,10,2,1,5,6,0 };
	cout << "Array Before " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	bubbleSort(arr, sizeof(arr) / sizeof(int));
	cout << "Array After " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	return 0;
}
#endif 