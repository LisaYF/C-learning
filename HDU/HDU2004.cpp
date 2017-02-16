#include<stdio.h>
int main(){
	int t;
	while(~scanf("%d",&t)){
		if(90<=t&&t<=100){
			printf("A\n");
		}
		else if(80<=t&&t<=89){
			printf("B\n");
		}
		else if(70<=t&&t<=79){
			printf("C\n");
		}
		else if(60<=t&&t<=69){
			printf("D\n");
		}
		else if(0<=t&&t<=59){
			printf("E\n");
		}
		else{
			printf("Score is error!\n");
		}
	}
	return 0;
}
