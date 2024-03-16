#include<stdio.h>
int main()
{
    int x,y;
printf("Enter any number: ");
scanf("%d",&x);
printf("Enter number of bit to set[0,31]: ");
scanf("%d",&y);
printf("Bit set successfully.\n");
printf("Number in decimal before setting bit number %d : %d\n",x,x);
printf("Number in decimal after setting bit number  %d : %d",y,(x|(1<<y)));

    return 0;
}