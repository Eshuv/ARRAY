#include <stdio.h>

int main()
{
	int arr1[5], arr2[5], i;

	printf("Enter The Elements : \n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i];
	}
	for (i = 0; i < 5; i++)
	{
		printf("\Array 1 is : %d \n", arr1[i]);
	}
	printf("\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Array 2 is : %d \n", arr2[i]);
	}
}