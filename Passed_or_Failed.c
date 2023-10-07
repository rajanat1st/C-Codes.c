/* Given the marks (out of 100) of 5 different subjects viz. English, Maths, Physics, Chemistry and Computer Science. Determine if the student is PASSED
or FAILED in exam.
A student is considered as PASS, if and only if he/she gets more than 34 marks in EACH and EVERY subject. */

#include<stdio.h>
    int result(int a)
{
	int e,m,p,c,cs;
	printf("Enter the marks in English: ");
	scanf("%d",&e);
	printf("Enter the marks in Maths: ");
	scanf("%d",&m);
	printf("Enter the marks in Physics: ");
	scanf("%d",&p);
	printf("Enter the marks in Chemistry: ");
	scanf("%d",&c);
	printf("Enter the marks in Computer Science: ");
	scanf("%d",&cs);
	if(e<=100 && m<=100 && p<=100 && c<=100 && cs<=100)
	{
	if(e>34 && m>34 && p>34 && c>34 && cs>34)
	printf("\nThe student is PASSED");
	else
	{
	printf("\nThe student is FAILED");
	exit(0);
	}
	}
    else
    {
	printf("\nIndividual subject's marks should not be greater than 100! Please enter the valid marks again.\n");
    result(1);
	} 
}
int main()
{
	int e,m,p,c,cs;
	printf("Enter the marks in English: ");
	scanf("%d",&e);
	printf("Enter the marks in Maths: ");
	scanf("%d",&m);
	printf("Enter the marks in Physics: ");
	scanf("%d",&p);
	printf("Enter the marks in Chemistry: ");
	scanf("%d",&c);
	printf("Enter the marks in Computer Science: ");
	scanf("%d",&cs);
	if(e<=100 && m<=100 && p<=100 && c<=100 && cs<=100)
	{
	if(e>34 && m>34 && p>34 && c>34 && cs>34)
	printf("\nThe student is PASSED");
	else
	{
	printf("\nThe student is FAILED");
	exit(0);
	}
	}
    else
    {
	printf("\nIndividual subject's marks should not be greater than 100! Please enter the valid marks again.\n");
    result(1);
	}
}