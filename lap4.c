#include<stdio.h>
int main()
{
    int x,y,temp=0;
printf("Enter any two numbers: \n");
scanf("%d%d",&x,&y);
printf("Original value of num1 = %d\n",x);
printf("Original value of num2 = %d\n\n",y);
temp=x;
x=y;
y=temp;
printf("num1 after swapping = %d\n",x);
printf("num2 after swapping  = %d\n\n",y);



    return 0;
}