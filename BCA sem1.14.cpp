//Write a C program to count he digits of a whole number//
#include <stdio.h>
int main()
{
	int n, count=0, digit;
	printf("Enter the while number to count:")
	scanf("%d, &n");
	while(n!=0)
	{
		digit=n%10;
		printf("%d\n",digit);
		count++;
		n=n/10;
	}
	printf("Counted digits are:%d",count);
	return 0;
}
