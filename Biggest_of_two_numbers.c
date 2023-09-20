// Write a program to find biggest of two numbers.

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("Biggest is %d",a);
	else
	printf("Biggest is %d",b);
}