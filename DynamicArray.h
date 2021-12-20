#pragma once

#include <stdio.h>
#include <malloc.h>


int main()
{
	int sz; 
	int num = 0;
	printf("User Input for array SZ: ");
	scanf_s("%d", &sz);

	//create arraof given size 
	int *arr = (int*)malloc(sizeof(int) * sz);

	printf("Inut array Values");

	for (int i = 0; i < sz; i++)
	{
		printf("\nInput Array Value: ");
		scanf_s("%d", &num);
		arr[i] = num;
	}

	//print array
	for (int i = 0; i < sz; i++)
	{
		printf("%d, ", *(arr +i));
	}
}
