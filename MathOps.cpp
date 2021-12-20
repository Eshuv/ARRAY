
#include "MathOps.h"


int Add(int a, int b) 
{ 
	return a + b;  
}

int Mult(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int Sub(int a, int b)
{
	int c;
	if (a > b)
		c = a - b;
	else
		c = b - a;
	return c;
}