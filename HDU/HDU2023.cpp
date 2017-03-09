#include<stdio.h>
int main(){
	int n=0,m=0;
	int a[55][10];
	while(~scanf("%d%d",&m,&n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}

		
		for(int i=0;i<n;i++){
			int sum1=0;
			for(int j=0;j<m;j++){
				sum1=sum1+a[i][j];
			}
			double average1=sum1/m;//每个学生的平均成绩
			if(i!=0){
				printf(" ");
			}
			printf("%.2f",average1);
		}
		printf("\n");
		
		for(int j=0;j<m;j++){
			int sum2=0;
			for(int i=0;i<n;i++){
				sum2=sum2+a[i][j];
			}
			double average2=sum2/n;//每门课程的平均成绩
			if(j!=0){
				printf(" ");
			}
			printf("%.2f",average2);
		}
	}
	return 0;
}