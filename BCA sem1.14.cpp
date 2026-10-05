//Write a C program to count he digits of a whole number//
#include <stdio.h>
int main()
{
	int n, count=0;
	printf("Enter the whole number to count:");
	scanf("%d", &n);
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("\n total count of digits:%d", count);
	return 0;
}
