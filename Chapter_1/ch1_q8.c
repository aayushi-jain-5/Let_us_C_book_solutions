//Reverse a number
#include<stdio.h>
#include<conio.h>

int main(){
	int num,ans=0;
	printf("Enter a five-digit number");
	scanf("%d",&num);
	while(num!=0){
		int x= num%10;
		ans=ans*10+x;
		num/=10;
	}
	printf("The reverse of num is %d",ans);
	
	return 0;
}
