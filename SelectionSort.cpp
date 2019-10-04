#include "stdafx.h"

#if 0
#include <iostream>
using namespace std;
//Select correct number for a position
void SelectionSort(int arr[], int size)
{
	int j=0,k = 0,temp=0;
	for (int i = 0; i < size-1; i++)
	{
		k = j = i;
		for (; j < size; j++)
		{
			if (arr[k] > arr[j])
			{
				k = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
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
	cout << "Selection Sort" << endl;
	int arr[] = { 3,7,10,2,1,5,6,0 };
	cout << "Array Before " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	SelectionSort(arr, sizeof(arr) / sizeof(int));
	cout << "Array After " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	return 0;
}
#endif 