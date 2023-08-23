// Write a program to print all arithmetic operations on two given numbers
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter any two numbers: ");
	scanf("\n%d%d",&m,&n);
	printf("\n%d + %d = %d",m,n,m+n);
	printf("\n%d - %d = %d",m,n,m-n);
	printf("\n%d x %d = %d",m,n,m*n);
	printf("\n%d / %d = %.2f",m,n,m*1.0/n);
}