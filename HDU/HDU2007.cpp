#include<stdio.h>
int main() {
	int m = 0, n = 0;
	while (~scanf("%d%d", &m, &n)) {
		int x = 0, y = 0;
		int t;
		if (n < m) {
			t=n;
			n=m;
			m=t;
		}
		for (int i = m; i <= n; i++) {
			if (i % 2 == 0) {
				x = x + i * i;
			}
			else {
				y = y + i * i * i;
			}
		}
		printf("%d %d\n", x, y );
	}
	return 0;
}