#include<stdio.h>
int main()
{
	int c,d;
	printf("Enter the value of C : ");
	scanf("%d",&c);
	printf("Enter the value of D : ");
	scanf("%d",&d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("The value of C is %d and the Value of D is %d",c,d);
	return 0;
}
