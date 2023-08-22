// Write a program to compute the Compound Interest (CI) when Principal (P),Rate of interest (R) and Tme period (T) are given.
#include<stdio.h>
#include<math.h>
int main()
{
	int p;
	float r,t,amt,ci;
	printf("Enter the principal amount: ");
	scanf("%d",&p);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	printf("Enter the time period in years: ");
	scanf("%f",&t);
	amt=p*pow((1+r/100.0),t);
	ci=amt-p;
	printf("The compound interest is %.2f Rs",ci);
	
}