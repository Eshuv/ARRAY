#include <stdio.h>

int main()
{
	int i, max = 0;
	int arr[3] = {1, 2, 3};
	int min = arr[0];

	for (i = 0; i < 3; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("The maximum value in array this array is : %d \n", max);
	printf("The minimum value in array this array is : %d \n", min);
}