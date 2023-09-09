/* Write a program that takes marks of five subjects, Physics, Chemistry, Biology, Mathematics and Computer Science as input and calculate 
percentage and grade according to given conditions:

If percentage >= 90%: Print: Grade A
If percentage >= 80%: Print: Grade B
If percentage >= 70%: Print: Grade C
If percentage >= 60%: Print: Grade D
If percentage >= 40%: Print: Grade E
If percentage < 40%: Print: Grade F   */

#include<stdio.h>
int main()
{
	int p,c,m,b,cs;
	char g;
	float pcg;
	printf("Enter the marks in Physics: ");
	scanf("%d",&p);
	printf("Enter the marks in Chemistry: ");
	scanf("%d",&c);
	printf("Enter the marks in Biology: ");
	scanf("%d",&b);
	printf("Enter the marks in Mathematics: ");
	scanf("%d",&m);
	printf("Enter the marks in Computer Science: ");
	scanf("%d",&cs);
	pcg=(p+c+b+m+cs)/5;
	if(pcg>=90)
	g='A';
	else if(pcg>=80)
	g='B';
	else if(pcg>=70)
    g='C';
    else if(pcg>=60)
    g='D';
    else if(pcg>=40)
    g='E';
    else
    g='F';
    printf("Percentage = %.2f %%\nGrade = %c",pcg,g);
}