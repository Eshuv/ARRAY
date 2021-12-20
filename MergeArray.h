#pragma once

#include <stdio.h>

#define M 10
#define N 10

void MergeArray(int arr1[], int arr2[], int arr3[])
{
	int count = 0;
	for (int i = 0; count < M; count++)
	{
		arr3[count] = arr1[count];
	}
	for (int i = 0; count < M + N; i++, count++)
	{
		arr3[count] = arr2[i];
	}
}

void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n\n");
}

int main()
{
	int arr1[M] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[N] = { 10,11,12,13,14,15,16,17,18,19 };
	int arr3[M + N] = { 0, };
	int sz = M + N;

	MergeArray(arr1, arr2, arr3);

	Print(arr3, sz);
}
