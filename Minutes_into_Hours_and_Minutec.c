// Write a program to converte given minutes into hours and minutes.
#include<stdio.h>
int main()
{
    int min,m,h;
    printf("Enter the number of minutes: ");
    scanf("%d",&min);
    h=min/60;
    m=min%60;
    printf("%d minutes = %d hours and %d minutes",min,h,m);
}
