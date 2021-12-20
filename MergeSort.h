#pragma once

#include <stdio.h>

void Merge(int arr[], int lb, int mid, int ub)
{
	int i = lb;
	int j = mid + 1;
	int k = lb;
	int arr2[k];

	while ( i <= mid && j <= ub)
	{
		if (arr[i] <= arr[j])
		{
			arr2[k] = arr[i];
			i++;
		}
		else
		{
			arr2[k] = arr[j];
			j++;
		}
		k++;
	}
	if (i < mid)
	{
		while (j <= ub)
		{
			arr2[k] = arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while (i <= mid)
		{
			arr2[k] = arr[i];
			i++;
			k++;
		}
	}
}

void MergeSort(int arr[], int lb, int ub)
{
	if (lb < ub)
	{
		int mid = (lb + ub) / 2;
		MergeSort(arr, lb, mid);
		MergeSort(arr, mid + 1, ub);
		Merge(arr, lb, mid, ub);
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

	MergeSort(arr, 0, sz);

	Print(arr, sz);
}
