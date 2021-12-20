#include <stdio.h>

int main()
{
	int i, count = 0;
	int arr[3] = {5, 1, 1};

	for (i = 0; i < 3; i++)
	{
		if(arr[i] == arr[i+1])
		{
			count++;
		}
	}
	printf("The number of duplicate number is : %d\n", count);
}