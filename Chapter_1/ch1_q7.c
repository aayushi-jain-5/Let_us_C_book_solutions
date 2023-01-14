#include<stdio.h>
#include<conio.h>

int main(){
	int num,ans=0;
	printf("Enter a five-digit number");
	scanf("%d",&num);
	while(num!=0){
		int x= num%10;
		ans=x+ans;
		num/=10;
	}
	printf("The final result is %d",ans);
	
	return 0;
}
