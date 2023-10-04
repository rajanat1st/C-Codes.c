//Program to print Alphabets using ASCII Values.
#include<stdio.h>
int main()
{
	printf("Alphabets from A to Z: \n");
	for(int i=65;i<=90;i++)
	{
		printf("%c ",i);
	}
	printf("\n\nAlphabets from a to z: \n");
	for(int i=97;i<=122;i++)
	{
		printf("%c ",i);
	}
}