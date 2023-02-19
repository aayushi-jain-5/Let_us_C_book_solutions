#include<stdio.h>
int main()
{
	int num,n=0,p=0,z=0,a;
	
	while(1)
	{
		printf("Do you want to enter the number ('1' for 'yes' And '0' for 'no') : ");
		scanf("%d",&a);
		if(a==0)
	     break;
		printf("Enter the number : ");
		scanf("%d",&num);
		if(num>0)
		 p++;
		else if(num<0)
		 n++;
		else
		 z++;    
	}
	printf("The count of positive number entered is %d\n",p);
	printf("The count of negative number entered is %d\n",n);
	printf("The count of zeroes entered is %d\n",z);
	return 0;
}
