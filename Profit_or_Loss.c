/* Write a program to calculate profit or loss on a transaction. Given that, the cost price and selling price of an item respectively.
Note: If cost price and selling price are equal then print "No profit No loss". */
#include<stdio.h>
int main()
{
	int c,s;
	printf("Enter the cost price: ");
	scanf("%d",&c);
	printf("Enter the selling price: ");
	scanf("%d",&s);
	if(c<s)
	printf("\nProfif");
	else if(c==s)
	printf("\nNo profif No loss");
	else
	printf("\nLoss");
}