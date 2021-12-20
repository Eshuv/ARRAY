#pragma once

#include <stdio.h>

int InsertionSort(int arr[], int sz)
{
	int j,temp = 0;
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
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
	return 0;
}


int main()
{
	int arr[10] = { 0,1,9,2,8,3,7,4,6,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	InsertionSort(arr, sz);
}
