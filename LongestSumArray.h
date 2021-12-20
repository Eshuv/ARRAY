#pragma once

#include <stdio.h>

void PrintArray(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", i+1);
	}
}

int main()
{
	int arr[] = { 0, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("Enter the number of elements :");
	scanf_s("%d", &sz);
	PrintArray(arr, sz);

}