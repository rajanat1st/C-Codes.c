/* Write a program to print the color name by taking the Color code as input.
V -> Violet, I -> Indigo, B -> Blue, G -> Green, Y -> Yellow, O -> Orange, R -> Red (Letters indicating colors are not case sensitive).
If none of the above characters mentioned is entered as input, print -1 as output. */

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if (ch=='V'||ch=='v')
	printf("Violet");
	else if(ch=='I'||ch=='i')
	printf("Indigo");
	else if(ch=='B'||ch=='b')
	printf("Blue");
	else if(ch=='G'||ch=='g')
	printf("Green");
	else if(ch=='Y'||ch=='y')
	printf("Yellow");
	else if(ch=='O'||ch=='o')
	printf("Orange");
	else if(ch=='R'||ch=='r')
	printf("Red");
    else
    printf("-1");
}