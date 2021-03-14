#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of array: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &array[i]);

    }
    for(int j = 0; j < n; j++)
    {
        printf("The number is : %d\n", array[j]);
    }
}
