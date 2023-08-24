// Write a program to convert specified days into years and weeks
#include<stdio.h>
int main()
{
    int d,w,y;
    printf("Enter the number of days: ");
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    printf("%d Days = %d Years and %d Weeks",d,y,w);
}