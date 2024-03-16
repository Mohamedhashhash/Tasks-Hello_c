#include<stdio.h>
int main()
{
    float a,b,c,d,e;
printf("ENter marks of five subjects:\n");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
printf("Total marks = %2f\n",a+b+c+d+e);
printf("Average marks = %2f",(a+b+c+d+e)/5);
    return 0;
}