#include<stdio.h>

int main()
{
    int n;
    int i = 0;
    printf("Enter the number of array: ");
    scanf("%d", &n);
    int array[n];
    while(i < n)
    {

        printf("Enter the number: \n");
        scanf("%d", &array[i]);
        i = i + 1;
    }
    for(int j = 0; j < n; j++)
    {
        printf("The number is : %d\n", array[j]);
    }
    return 0;
}
