/*Write a C program to print the following pattern
      4
    4 3 4
  4 3 2 3 4
4 3 2 1 2 3 4
  4 3 2 3 4
    4 3 4
      4
*/
      
#include <stdio.h>
int main()
{
	int i, j, k;
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4-i; j++)
		{
			printf(" ");
		}
		for(j=4; j>=4-i; j--)
		{
			printf("%d",j);
		}
		for(k=5-i; k<=4; k++)
		{
			if(i!=0)
			{
				printf("%d",k);
			}	
		}
		printf("\n");
	}
	for(i=3; i>=0; i--)
	{
		for(j=0; j<4-i; j++)
		{
			printf(" ");
		}
		for(j=4; j>=4-i; j--)
		{
			printf("%d",j);
		}
		for(k=5-i; k<=4; k++)
		{
			if(i!=0)
			{
				printf("%d",k)
			}
		}
	}
}
