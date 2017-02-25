#include<stdio.h>
int main() {
	int m, n, h, t, o;
	while (~scanf("%d%d", &m, &n)) {
		int s = 0;
		for (int i = m; i <= n; i++) {
			h = i / 100;
			t = i / 10 - h * 10;
			o = i % 10;
			if (h * h * h + t * t * t + o * o * o==i) {
				if(s!=0)printf(" ");//数字后面用空格隔开
				printf("%d", i);
				s++;
			}
		}
		if (s == 0) {
			printf("no");
		}
		printf("\n");//注意换行
	}
	return 0;
}