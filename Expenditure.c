/* Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, ie., he spends Y rupees each day.
Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.(X and Y are
taken from the console) */

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the amount Akshat is having now(X): ");
	scanf("%d",&x);
	printf("Enter the amount Akshat spends each day(Y): ");
	scanf("%d",&y);
	if(y*30<=x)
	printf("\nAkshat has enough money");
	else
	printf("\nAkshat does not have enough money");
}