// Write a C Program to average the elements of an array //

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
