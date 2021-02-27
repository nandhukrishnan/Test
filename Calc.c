#include<stdio.h>
void main()
{
	sum(5, 10);
	sub(8,4);
}
void sum(int a, int b)
{
	int c = a + b;
	printf("SUM: %d", c);
}
void sub(int a, int b)
{
	int c = a - b;
	printf("SUB: %d", c);
}
