#pragma once
#include <stdio.h>

int main()
{
	int arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 2; i < 3; i--)
	{
		printf("%d  ", arr[i]);
		if (arr[i]<0)
		{
			break;
		}
	}
}
