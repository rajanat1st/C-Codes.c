/* In a  coding contest, there are two types of problems:
Esay problems, which are worth 1 point each and Hard problems, which are worth 2 points each.
To qualify for the next round, a contestant must score at least X points. Professor solved A Easy problems and B Hard problems. Will Professor
qualify or not? (X,A and B are taken from the console)*/ 

#include<stdio.h>
int main()
{
	int x,a,b,ep,hp;
	printf("Enter the minimum score to qualify: ");
	scanf("%d",&x);
	printf("Enter the Easy problems Professor solved: ");
	scanf("%d",&a);
	printf("Enter the Hard problems Professor solved: ");
	scanf("%d",&b);
	ep=a;  hp=b*2;
	if((ep+hp)>=x)
		printf("Professor will qualify");
	else
	printf("Professor will not qualify");
	
	
}