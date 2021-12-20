#pragma once

#include <stdio.h>

void SelectionSort(int arr[], int sz)
{
	int IndexofMin, temp;
	for (int i = 0; i < sz -1; i++)
	{
		IndexofMin = i;
		for (int j = i+1; j < sz; j++)
		{
			if (arr[j] < arr[IndexofMin])
			{
				IndexofMin = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[IndexofMin];
		arr[IndexofMin] = temp;
	}
}

void Print(int arr[], int sz)
{
	for (int  i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Print(arr, sz);

	SelectionSort(arr, sz);

	Print(arr, sz);
}