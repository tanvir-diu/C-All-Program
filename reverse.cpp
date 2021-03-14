#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    printf("Enter elements in array: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray in reverse order: ");
    for(i=5; i>0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
