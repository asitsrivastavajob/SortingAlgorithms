#include "stdafx.h"

#if 0
#include <iostream>
using namespace std;
//in an sorted array insert a new element at correct position
void InsertionSort(int arr[], int size)
{
	int temp = 0;
	int j = 0;
	for (int i = 1; i < size-1; i++)
	{
		j = i - 1;
		temp = arr[i];
		while( (j > -1) && (arr[j] > temp) )
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
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
	cout << "Insertion Sort" << endl;
	int arr[] = { 3,7,10,2,1,5,6,0 };
	cout << "Array Before " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	InsertionSort(arr, sizeof(arr) / sizeof(int));
	cout << "Array After " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	return 0;
}
#endif 