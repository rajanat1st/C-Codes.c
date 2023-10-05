// Write a program to print Multiplication table of given number.
#include<stdio.h>
int main()
{
	int n;
	printf("Which number's multiplication tabel do you need? : ");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		printf("\n%dX%d=%d",n,i,n*i);
	}
}