#include "stdafx.h"

#if 1
#include <iostream>
using namespace std;
int Partition(int arr[], int start, int end)
{
	int pivot = arr[start];
	int i = start, j = end;
	int temp;
	do {

		do{
			i++;
		} while (pivot >= arr[i]);

		do{
				j--;
		} while (pivot < arr[j]);

		if (j > i)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	} while (j > i);

	temp = arr[start];
	arr[start] = arr[j];
	arr[j] = temp;

	return j;
}

void QuickSort(int arr[], int start,int end)
{
	if (end > start)
	{
		int mark;
		mark = Partition(arr, start, end);
		QuickSort(arr, start, mark);
		QuickSort(arr, mark+1, end);
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
	cout << "Quick Sort" << endl;
	//int arr[] = { 3,7,10,2,1,5,6,0 };
	int arr[] = { 10,7,2,1,10,6,5,0,10 };
	cout << "Array Before " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	QuickSort(arr, 0, sizeof(arr) / sizeof(int));
	cout << "Array After " << endl;
	display(arr, sizeof(arr) / sizeof(int));
	return 0;
}
#endif 