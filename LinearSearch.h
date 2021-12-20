#pragma once
#include <stdio.h>

void SearchNum(int arr[], int sz, int searchElement)
{
	bool flag = false;
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] == searchElement)
		{
			printf("Element found: %d, at index : %d", searchElement, i);
			flag = true;
			break;
		}
	}
	if (flag == false)
	{
		printf("The value not found.\n\n");
	}
}

int main()
{
	int arr[] = {0,9,1,8,2,7,3,6,4,5};
	int sz = sizeof(arr) / sizeof(arr[0]);

	SearchNum(arr, sz, 6);	
}