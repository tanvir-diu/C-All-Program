#include<stdio.h>
int main()

{   int hello[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&hello[i]);

    for(i=0;i<5;i++)
        printf("%d \n",hello[i]);
    int *p;
    p=&hello[0];
    for(i=0;i<5;i++)
        printf("%d \n",*(p+i));
        p=&hello[5];
        for(i=0;i<5;i++)
            printf("%d\n",*(p+i));
        for(i=0;i<5;i++)
            printf("%d\n",*p+1);
return 0;

}
