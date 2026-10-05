// Write a C program to read an integer value and check whether it is positive or not. If it is positve then check whether it is odd or even//
#include <stdio.h>
int main()
{
	int a;
	printf("enter the the integer value:");
	scanf("%d", &a);
	if(a>0)
	{
		printf("the integer value is positive \n");
		if(a%2 ==0)
	    {
	    	printf("the integer value is even");
		}
	    else
	    {
		    printf("the integer value is odd");
	    }
    }
    else
    {
	    printf("the integer value is negative");
    }
    return 0;
}


