#include<stdio.h>
#include<conio.h>

int main(){
	int amt,cnt1=0,cnt2=0,cnt3=0;
	printf("Enter the amount");
	scanf("%d",&amt);
	while(amt>=100){
		cnt1+=1;
		amt-=100;
	}
	while(amt>=50){
		cnt2+=1;
		amt-=50;
	}
	while(amt>=10){
		cnt3+=1;
		amt-=10;
	}
	printf("Number of 100 rupees notes %d\n",cnt1);
	printf("Number of 50 rupees notes %d\n",cnt2);
	printf("Number of 10 rupees notes %d\n",cnt3);
	
	return 0;
}
