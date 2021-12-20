#pragma once

#include <stdio.h>

void InsertElement(int arr[], int sz, int ind, int num)
{
	for (int i = sz-2; i >= 0; i--)
	{
		arr[i + 1] = arr[i];

		if (arr[i] == ind)
		{
			arr[i] = num;
			break;
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
	int ind, num;
	int arr[] = { 0,1,2,3,4,5, 20, 21, 34, 56, 87, 90 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("Enter The Element : \n");
	scanf_s("%d", &num);
	
	printf("Enter The Index of The Element : \n");
	scanf_s("%d", &ind);

	InsertElement(arr, sz, ind, num);

	Print(arr, sz);

}
