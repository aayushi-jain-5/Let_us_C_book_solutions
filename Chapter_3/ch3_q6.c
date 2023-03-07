#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the x and y coordinates of the point : ");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0)
	{
		printf("The point lies on the origin");
	}
	else
	{
		if(x==0 && y!=0)
		{
			printf("The point lies on the y-axis");
		}
		else
		{
			if(x!=0 && y==0)
			{
				printf("The point lies on the x-axis");
			}
			else
			{
				printf("The neither lies on any axis nor on origin");
			}
		}
	}
	return 0;
}
