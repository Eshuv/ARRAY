#pragma once

#include <stdio.h>
#include <string.h>

struct Info
{
	char name[25];
	int age;
	int rollno;
};


int main()
{
	struct Info abhay;
	strcpy_s(abhay.name, "Abhay Gautam.");
	abhay.age = 46;
	abhay.rollno = 003;
	printf("The age of abhay is : %d \n\n", abhay.age);
	printf("The name of the student is %s \n\n", abhay.name);
	
}
