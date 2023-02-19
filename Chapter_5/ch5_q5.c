#include<stdio.h>
int main()
{
	int i=1,r,a,b,c,d;
	while(i<=500)
	{
		if(i<=9)
		{
			r=i*i*i;
		}
		else if(i<=99)
		{
			a=i%10;
			b=(i-a)/10;
			r=(a*a*a)+(b*b*b);
		}
		else
		{
			a=i%100;
			b=(i-a)/100;
			c=a%10;
			d=(a-c)/10;
			r=(b*b*b)+(c*c*c)+(d*d*d);
		}
		if(r==i)
		{
			printf("%d is a Armstrong Number\n",i);
		}
		else
		{
			printf("%d is not a Armstrong Number\n",i);
		}
		i++;
	}
	return 0;
}
