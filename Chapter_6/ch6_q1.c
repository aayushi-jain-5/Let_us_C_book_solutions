#include<stdio.h>
int main()
{
	int num=2,i;
	printf("Printing prime numbers from 1 to 300\n");
	while(num<=300)
	{
		i=2;
		while(i<=num-1)
		{
			if(num%i==0)
			{
				break;
			}
			i++;
		}
		if(i==num)
		{
			printf("%d\n",num);
		}
		num++;
	}
	printf("\n\n\n%d\n",num);
	return 0;
}
