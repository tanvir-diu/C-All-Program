#include<stdio.h>

int main()
{
    int array[105];
    for(int i = 0; i <= 10; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &array[i]);

    }
    for(int j = 0; j <= 10; j++)
    {
        printf("The number is : %d\n", array[j]);
    }
    return 0;

}
