#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int m = 0, n = 0, max = 0, x = 0, y = 0, s = 0;
	while (~scanf("%d%d", &m, &n)) {
		max = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &s);
				if (abs(max) < abs(s)) {
					max = s;
					x = i + 1;
					y = j + 1;
				}
			}
		}
		printf("%d %d %d\n", x, y, max);
	}
	return 0;
}