#include <stdio.h>

void print(int arr[], int sz)
{
}


int main()
{
	int max = 0;
	int hash[50] = { 0, };
	int arr[] = { 12, 25, 40, 45, 45, 25, 21, 9, 10, 9 ,10, 11 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		int index = arr[i];
		hash[index]++;
	}

	//print counter
	for (int i = 0; i < sz; i++)
	{
		int index = arr[i];
		printf("%d -> %d times \n", arr[i], hash[index]);
	}

}
