//Write a C Program to reverse the digits of a whole number//
#include<stdio.h>
int main()
{
	int n, reverse=0, digit;
	printf("Enter the whole number:");
	scanf("%d", &n);
	while(n!=10)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	printf("\n The reversed digit is:%d", reverse);
	return 0;
}
