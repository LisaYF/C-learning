#include<stdio.h>
int main() {
	int m = 0,n=0;
	scanf("%d", &m);
	while(m--){
		scanf("%d", &n);
		double s1 = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				s1 = s1 - 1.0 / i;//int/int=int,让其中一个大于int，取高的。
			}
			else {
				s1 = s1 + 1.0 / i;
			}
		}
		printf("%.2f\n", s1);
	}
	return 0;
}