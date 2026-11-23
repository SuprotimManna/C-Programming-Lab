// Write a C Program to take inputs from the user and display it on screen as an array //

#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of an array \n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n input elements are.... \n");
	for(i=0; i<n; i++)
	{
		printf("%d \n",arr[i]);
	}
}
