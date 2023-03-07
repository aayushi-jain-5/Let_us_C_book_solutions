#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("Enter the the three points (x1, y1),(x2, y2) and (x3, y3): ");
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	if((y3-y2)==(x3-x2)*(y2-y1)/(x2-x1))
	 printf("The three points fall on one straight line");
	else
	 printf("The three points does not fall on one straight line");
	return 0; 
}
