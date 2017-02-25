#include<stdio.h>
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		int f = 1;
		for (int i = n - 1; i >= 1; i--) {
			f = (1 + f) * 2;
		}
		printf("%d\n", f);
	}
	return 0;
}