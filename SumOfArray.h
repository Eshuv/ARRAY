#include <stdio.h>

int main()
{
	int arr[3];
	int i;
	int sum = 0;

	printf("Enter the elements of Array :\n");
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("The sum of all the elements is : %d ", sum);
}
