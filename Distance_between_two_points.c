// Write a program to calculate the distance between the two points (x1,x2) and (y1,y2).
#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	float d;
	printf("Enter the value of x1 and y1: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%d%d",&x2,&y2);
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("The distance between two points is %.2f units",d);
}
