#pragma once

#include <stdio.h>

int Partition(int arr[], int low, int high)
{
	int pivot = arr[low];
	int i = low + 1;
	int j = high;
	int temp;

	do
	{
		while (arr[i] <= pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		if (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	} while (i < j);
	temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;

	return j;
}

void QuickSort(int arr[], int low, int high)
{
	int partitionIndex;
	if (low < high)
	{
		partitionIndex = Partition(arr, low, high);
		QuickSort(arr, low, partitionIndex - 1);
		QuickSort(arr, partitionIndex + 1, high);
	}
}

void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[] = { 5,4,3,2,1,43,53,86,49,29,04,47,6434,8576,464 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Print(arr, sz);

	QuickSort(arr, 0, sz - 1);

	Print(arr, sz);
}
