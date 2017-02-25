#include<stdio.h>
#define Max 3000
int main() {
	int x = 0, y = 0, n = 0;
	//从一开始就必须判断好素数
	int prime[Max] = {1, 1};
	for (int i = 0; i < Max; i++) {
		if (!prime[i]) {
			for (int j = 2 * i; j <= Max; j += i) {
				prime[j] = 1;
			}
		}
	}
	while (~scanf("%d%d", &x, &y)) {
		if (x == 0 && y == 0) {
			return 0;
		}
		if (x >= -39 && y <= 50 && x < y ) {
			int t = 0;//判断Sorry和OK
			for (int i = x; i <= y; i++) {
				n = i * i + i + 41;
				if (prime[n] == 1) {
					t++;
					printf("Sorry\n");
					break;
				}
			}
			if (t == 0) {
				printf("OK\n");
			}
		}

	}
}