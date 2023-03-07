#include<stdio.h>
int main()
{
	int r,s,a;
	printf("Enter the age of Ram, Shayam and Ajay :");
	scanf("%d %d %d",&r,&s,&a);
	if(r<s && r<a)
	 printf("Ram is the youngest");
	if(s<r && s<a)
	 printf("Shayam is the youngest");
	if(a<s && a<r)
	 printf("Ajay is the youngest");  
	 return 0;
}
