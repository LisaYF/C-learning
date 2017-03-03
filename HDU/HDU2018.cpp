#include<stdio.h>
int f[100] = {0, 1, 2, 3, 4};
int main() {
	int n = 0;
	for (int i = 5; i <= 54; i++) {
		f[i] = f[i - 1] + f[i - 3];
	}
	while (scanf("%d", &n),n) {
		
		printf("%d\n", f[n]);
	}
	return 0;
}