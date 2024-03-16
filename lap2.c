#include<stdio.h>
int main()
{
   float t_f;
printf("Enter temperature in Fahrenheit: ");
scanf("%f",&t_f);
printf("%f Fahrenheit = %f Celsius.",t_f,(t_f-32)/1.8);
    return 0;
}