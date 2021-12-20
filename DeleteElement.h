#pragma once

#include <stdio.h>

void DeleteElement(int arr[], int sz, int num)
{
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] == num)
		{
			for (int j = num-1; j < sz-1; j++)
			{
				arr[j] = arr[j + 1];
			}			
			break;
		}
	}
	arr[sz - 1] = 0;
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
	int num;
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("Enter the Number you want to delete : \n");
	scanf_s("%d", &num);

	Print(arr, sz);

	DeleteElement(arr, sz, num);
	Print(arr, sz);
}
