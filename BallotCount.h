#pragma once

#include<stdio.h>

#define CAND_COUNT 50

int arr[CAND_COUNT] = {0, };
void ShowCandidates()
{
	printf("Show Election Candidate Options: \n");
	for (int i = 1; i <CAND_COUNT; i++)
	{
		printf("[%d] -> ", i);
	}
	printf("\n");
}

int nota = 0;
void Result()
{
	printf("Election Results: \n");
	for (int i = 1; i <CAND_COUNT; i++)
	{
		printf("[%d] -> ", arr[i]);
	}
	printf("NOTA Results: %d -> ", nota);
}

int main()
{
	bool status = true;
	int choice_option = 0;
	
	while (status)
	{

		ShowCandidates();
		scanf("%d", &choice_option);

		if (choice_option == 100)
			break;

		int temp;
		//ranges check
		if (choice_option > 0 && choice_option < CAND_COUNT)
		{
			temp = arr[choice_option];
			temp = temp + 1;
			arr[choice_option] = temp;
		}
		else
		{
			nota = nota + 1;
		}
		Result();
	}

}

