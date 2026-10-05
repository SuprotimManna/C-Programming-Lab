//Writw a C Program to find the sum of the digits of a whole number//
#include <stdio.h>
int main()
{
	int n, i=1, digit=0, sum=0;
	printf("Enter whole number:");
	scanf("%d", &n);
	while(n>0)
	{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	printf("\n Sum=%d", sum);
	return 0;
}
