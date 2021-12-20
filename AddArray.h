#include <stdio.h>

#define M 9
#define N 8

void printArray(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
}
int main()
{	
	int count = 0;
	int arr1[M] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[N] = {4, 5, 6, 11, 12, 13, 14, 15};
	int arr3[M+N];

	//arr3[10] = arr1[3] + arr2[3];
	printf("*******************************First Array ... ***********************************\n");
	printArray(arr1, M);
	for (; count <M ; count++)
	{
		arr3[count] = arr1[count];
	}

	printf("***************************Second Array ... *******************************************\n");
	printArray(arr2, N);
	for (int i = 0; count < M+N; i++, count++)
	{
		arr3[count] = arr2[i];
	}

	//print array
	printf("************************************Merged Array ... **************************************\n");
	printArray(arr3, M + N);
}