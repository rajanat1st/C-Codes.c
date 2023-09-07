/* This prohram will read Basic Salary, HRA and DA of an employee, calculate the PF on Basic Salary and finally print the PF and Gross Salary
of the employee.
Note: PF = 12% of the Basic Salary and Gross Salary = Basic Salary + HRA + DA + PF */

#include<stdio.h>
int main()
{
	int bs,hra,da;
	float pf,gs;
	printf("Enter the Basic Salary of the employee: ");
	scanf("%d",&bs);
	printf("Enter the HRA of the employee: ");
	scanf("%d",&hra);
	printf("Enter the DA of the employee: ");
	scanf("%d",&da);
	pf=bs/100*12;
	gs=bs+hra+da+pf;
	printf("\nPF of the employee = %.2f Rs",pf);
	printf("\nGross Salary of the employee = %.2f Rs",gs);	
}
