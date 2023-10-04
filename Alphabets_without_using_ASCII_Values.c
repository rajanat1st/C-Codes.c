// Program to print Alphabets without using ASCII Values.
#include<stdio.h>
int main()
{
	printf("Alphabets from A to Z: \n");
	for(char i='A';i<='Z';i++)
	{
		printf("%c ",i);
	}
	printf("\n\nAlphabets from a to z: \n");
	for(char i='a';i<='z';i++)
	{
		printf("%c ",i);
	}
}