#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,t1,t2,rn;
	
	//input from the user :-
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
	
	//reversing c to h which is the first and the last number :-
	t1=c;
	c=h;
	h=t1;
	
	//reversing e to i which is the 2nd and  4th number:-
	t2=e;
	e=i;
	i=t2;
	
	rn=rn+c*10000;
	rn=rn+e*1000;
	rn=rn+g*100;
	rn=rn+i*10;
	rn=rn+h*1;

	if(rn==a)
	{
		printf("Given number & its reversed are equal");
	}
	else
	{
		printf("Given number & its reversed are not equal");
	}
}
