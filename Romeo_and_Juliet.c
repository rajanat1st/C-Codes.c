/* Romeo has X 5 rupee coins and Y 10 rupee coins. Romeo goes to a shop to buy chocolates for Juliet where each chocolate costs
Z rupees. Find tne maximum number of chocolates that Romeo can buy for Juliet (Take X, Y and Z from the console). */
#include<stdio.h>
int main()
{
	int x,y,z,c;
	printf("Enter the value of X: ");
	scanf("%d",&x);
	printf("Enter the value of Y: ");
	scanf("%d",&y);
	printf("Enter the value of Z: ");
	scanf("%d",&z);
	c=((x*5)+(y*10))/z;
	printf("The maximum chocolates Romeo can buy = %d",c);
}
