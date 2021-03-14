#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    a[0]=12;
    a[1]=11;
    a[2]=6;
    a[3]=8;
    a[4]=2;
    for(i=0;i<5;i++)
    {

    sum=sum+a[i];

    }

printf("The sum is %d\n",sum);
printf("The average is %2f\n",(float)sum/5);
return 0;

}
