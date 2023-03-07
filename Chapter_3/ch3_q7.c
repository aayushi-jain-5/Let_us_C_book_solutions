#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter the three angles of the triangle: ");
	scanf("%d %d %d",&a1,&a2,&a3);
	if((a1+a2+a3)==180)
	{
		printf("This triangle is valid");
	}
	else
	{
		printf("This triangle is not valid");
	}
	return 0;
}
