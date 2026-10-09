//write a c program to find the sum of the following series:1+10+101+1010+...upto n terms//
#include <stdio.h>
int main() 
{
	int n,i;
	long long term=1;
	long long sum=0;
	printf("enter the no of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			term=term*10+1;
		}
		else
		{
			term=term*10;
			sum=sum+term;
			printf("%d",term);
		}
		if(i<n)
		{
			printf("+");
			i++;
		}
	}
	printf("\nSum=%",sum);
	return 0;
}  
