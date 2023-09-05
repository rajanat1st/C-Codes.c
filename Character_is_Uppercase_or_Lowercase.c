// Write a program to find whether a character is Uppercase or Lowercase.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("%c is an uppercase",ch);
	else if(ch>='a' && ch<='z')
	printf("%c is a lowercase",ch);
	else 
	printf("%c is not an alphabet!",ch);
}