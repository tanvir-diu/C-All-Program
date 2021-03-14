//Final Assaignment

#include<stdio.h>
int main()
{
    //Take Variables
    int a[10],sum=0,i;
    printf("enter ten numbers");

//Using loops-1
        for(i=0;i<10;i++)

{
//Calculating-1
        scanf("%d",&a[i]);

}
//Using loops-2
     for(i=0;i<10;i++)
    {
        //Calculating 2
        sum=sum+a[i];

    }
    //Output Lines
    printf("the sum is %d\n",sum);
    printf("the average is %f\n",(float)sum/10);
    return 0;

}
