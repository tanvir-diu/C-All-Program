#include <stdio.h>
#include <stdlib.h>

int main ()
{
  float c,f;


 printf("Enter the temperature in Celsius  ");
  scanf("%f",&c);
  f = c*(9/5)+32;
printf("The temperature in Fahrenheit is %.01f\n\n",f);
 printf("Enter the temperature in Fahrenheit  ");
  scanf("%f",&f);
  c = (f-32)*5/9;

  printf("The temperature in Celsius is %.01f\n\n", c);
 return 0;
}
