#include<stdio.h>
int main()
{
	int ry,y,td,fd,ld,nd;
	printf("Enter the year : ");
	scanf("%d",&y);
	
	nd=(y-1)*365;
	ld=(y-1)/4-(y-1)/100+(y-1)/400;
	td=nd+ld;
	fd=td%7;
	
	if(fd==0)
	 printf("Monday");
	if(fd==1)
	 printf("Tuesday"); 
	if(fd==2)
	 printf("Wednesday");
	if(fd==3)
	 printf("Thursday");
	if(fd==4)
	 printf("Friday");
	if(fd==5)
	 printf("Saturday");
	if(fd==6)
	 printf("Sunday");
	return 0;      
}
