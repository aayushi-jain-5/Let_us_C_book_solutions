#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,r;
	printf("Enter a five-digit number : ");
	scanf("%d",&a);
	
	//giving values to the variables from the entered five-digit number :-
	
	b=a%10000;//taking the last four digits from the number;
	
	c=(a-b)/10000;//to extract first number of the enter five-digit number; 
	
	d=b%1000;//taking the last three digits from the number;
	
	e=(b-d)/1000;//to extract second number of the enter five-digit number; 
	
	f=d%100;//taking the last two digits from the number;
	
	g=(d-f)/100;//to extract third number of the enter five-digit number;
	
	h=f%10;//printf("%d",h);//taking the last digits from the number and it is the fifth number;
	
	i=(f-h)/10;//to extract fourth number of the enter five-digit number;
	

	r=c+e+g+h+i;	//sum of the digits of the entered five-digit number:-
	printf("%d",r);
	return 0;
}
