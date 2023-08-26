// Write a program to extract the last two digits of a given year
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y;
	printf("Enter the year: ");
	scanf("%d",&y);
	if (y>0 && y<=9)
	{
	printf("Entered year only contains single digit %d",y);
	exit(0);}
	y=y%100;
	printf("The last two digits of the entered year are %d",y);
}