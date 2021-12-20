#pragma once

#include <stdio.h>


void Swap(int* a, int* b)
{
	int temp = *a; 
	*a = *b;
	*b = temp;
}

void BubbleSearch(int arr[], int sz)
{
	int i, j, flag;
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{			
			if (arr[j] < arr[j+1])
			{
				/*temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				Swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		//return arr;
	}
	for (i = 0; i < sz; i++)
	{
		printf(" %d   ", arr[i]);
	}
}

int main()
{
	int arr[] = { 0,9,1,8,2,7,3,6,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	BubbleSearch(arr, sz);
	//Print(arr, sz);
}