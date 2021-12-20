#include <stdio.h>

int main()
{
	int arr[5] = {25, 47, 42, 56, 32};
	int arr1[5] = {0, };
	int arr2[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[i] = arr[i];
		}
		else
		{
			arr2[i] = arr[i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] != 0)
		{
			printf("The elements of even array : %d \n", arr1[i]);
		}
		if (arr2[i] != 0)
		{
			printf("The elements of odd array : %d \n", arr2[i]);
		}
	}
}
