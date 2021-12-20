#pragma once

#include <stdio.h>

void BubbleSort(int arr[], int sz)
{
	int temp;
	int i, j;
	for (i = 0; i < sz -1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, sz);

	Print(arr, sz);

}
