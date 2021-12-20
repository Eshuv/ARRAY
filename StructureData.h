#pragma once

#include<stdio.h>
//structure data types

typedef struct StudentInfo
{
	int a; 
	int b;
	int c;
	int d;
}ST;

void print(ST* info)
{
	printf("Before Change Struct Info: %d, %d, %d, %d\n", info->a, info->b, info->c, info->d);

	info->a = 50;
	info->b = 60;
	info->c = 70;
	info->d = 80;
	printf("After Change Struct Info: %d, %d, %d, %d\n", info->a, info->b, info->c, info->d);
}
int main()
{
	ST st1; // = { 10, 20, 30, 40 };   //definition
	st1.a = 10;
	st1.b = 20;
	st1.c = 30; 
	st1.d = 40;
	print(&st1);

	printf("After Change Struct Info: %d, %d, %d, %d\n", st1.a, st1.b, st1.c, st1.d);
}
