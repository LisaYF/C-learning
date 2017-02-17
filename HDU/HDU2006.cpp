#include<stdio.h>
int main() {
	int n, a;
	while (~scanf("%d", &n)) {
		int s = 1;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a);
			if (a % 2 != 0) {
				s = s * a;
			}

		}
		printf("%d\n", s);
	}
	return 0;
}