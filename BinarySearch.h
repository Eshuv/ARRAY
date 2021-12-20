#pragma once

#include <stdio.h>

int InsertionSort(int arr[], int sz)
{
	int j, temp = 0;
	for (int i = 0; i < sz; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	return 0;
}

void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n\n");
}

int BinarySearch(int arr[], int sz, int data)
{
	int low = 0, mid;
	int high = sz - 1;
	
	while (low <= high)  /// proble with loop
	{
		mid = low + (high-low) / 2; //overflow of number 
		if (arr[mid] == data)
		{			
			return mid;
		}
		else
		{
			if (arr[mid] < data)
			{
				low = mid + 1;
			}
			else 
			{
				high = mid - 1;
			}
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 0,41,52,83,8,15,16,17,28,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int data = 15;
	
	Print(arr, sz);
	//sort aray 
	InsertionSort(arr, sz);

	Print(arr, sz);

	//saerch element
	int mid = BinarySearch(arr, sz, data);
	printf("The data is at index %d \n", mid);
}
