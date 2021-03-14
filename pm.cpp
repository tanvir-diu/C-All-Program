#include<stdio.h>
int main()

{
int i,n,prod;

printf("Enter the number:");

scanf("%d",&n);

for(i=1;i<=20;i++)

{

prod=n*i;printf("%d*%d=%d\n",n,i,prod);


}
return 0;
}
