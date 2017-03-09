#include<stdio.h>
int main() {
	int n = 0, m = 0;
	int a[60][10];
	while (~scanf("%d%d", &n, &m)) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		
		
		for (int i = 0; i < n; i++) {
			int sum1 = 0;
			for (int j = 0; j < m; j++) {
				sum1 += a[i][j];
			}
			//每个学生的平均成绩
			double average1 = (double)sum1 / m; 
			//* 1.0变成double才能有.5  也可以强制转换
			if(i!=0){
				printf(" ");
			}
			printf("%.2f", average1);
		}
		printf("\n");

		double  b[10];
		for (int j = 0; j < m; j++) {
			int sum2 = 0;
			for (int i = 0; i < n; i++) {
				sum2 +=a[i][j];
			}
			b[j] = (double)sum2  / n; //每门课程的平均成绩
			if(j!=0){
				printf(" ");
			}
			printf("%.2f", b[j]);
		}
		printf("\n");
		//有几个人超过平均数的
		int sum3 = 0;
		for (int k = 0; k < n; k++) {
			int s = 0;
			for (int j = 0; j < m; j++) {
			if (a[k][j] >= b[j]) {
					s++;
				}
			}
			if (s == m) {
				sum3++;
			}
		}
		printf("%d\n\n", sum3);
	}
	return 0;
}