#include<stdio.h>
int main() {
	int n = 0, m = 0, an = 0, sn = 0;
	while (~scanf("%d%d", &n, &m)) {
		if (n % m == 0) {
			for (int j = 0; j < (n / m); j++) {
				if (j != 0)
					printf(" ");
				printf("%d", 1 + m + 2 * m * j);
			}
			printf("\n");
		}
		else {
			for (int j = 0; j < (n / m); j++) {
				if (j != 0)
					printf(" ");
				printf("%d", 1 + m + 2 * m * j);
			}
			an = 2 + 2 * (n - n % m);
			sn = an * (n % m) + (n % m) * ((n % m) - 1);
			printf(" %d\n", sn);
		}
	}
	return 0;
}
