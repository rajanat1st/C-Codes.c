// Write a program to convert given seconds (integer) into hours, minutes and seconds
#include<stdio.h>
int main()
{
	int sec,h,m,s;
	printf("Enter the seconds: ");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec%3600)/60;
	s=(sec%3600)%60;
	printf("\n%d seconds = %dh:%dm:%ds",sec,h,m,s);
}