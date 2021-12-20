#include <stdio.h>


int main()
{
	int i;
	int arr[4] = {3, 2, 2, 5};

	for (i = 0; i < 4; i++)
	{
		if (arr[i] != arr[i + 1] && arr[i] != arr[i-1])
		{
			printf("The unique elemets of this array are : %d\n", arr[i]);
		}
	}

}
