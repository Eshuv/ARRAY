#pragma once

#include <stdio.h>

#define ROW 3
#define COL 3
int main()
{
    int arr1[][COL] = { {52, 68, 101}, {50, 94, 27}, {57, 64, 5} };
    int Max = 0;
    int Sum = 0;
    int TotalMax = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Roll No[%d] got marks in Subject[%d] is %d\n", i + 1, j + 1, arr1[i][j]);
            if (Max < arr1[i][j])
            {
                Max = arr1[i][j];
            }
            Sum = Sum + arr1[i][j];
        }
        if (Max > TotalMax)
            TotalMax = Max;

        printf("\nTotal Marks is %d ", Sum);
        printf("Maximum marks are %d \n\n", Max);

        //reset sum and max value  
        Max = 0;
        Sum = 0;
    }
    printf("The Highest marks of them all is %d ", TotalMax);
}