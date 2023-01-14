//sum of first and last digit
#include<stdio.h>
#include<conio.h>

int main(){
	int num;
	printf("Enter a four-digit number");
	scanf("%d",&num);
	int x= num%10;
	int y= num/1000;
	int z= x+y;
	printf("The sum of first and last digit is = %d",z);
	
	return 0;
}
