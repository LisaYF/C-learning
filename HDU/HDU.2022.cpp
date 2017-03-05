#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int m = 0, n = 0;
	int a[100][100];
	while (~scanf("%d%d", &m, &n)) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		//绝对值分数排序
		int max = 0, x = 0, y = 0;
		max = a[0][0];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (abs(max) < abs(a[i][j])) {
					max = a[i][j];
					x = i + 1;
					y = j + 1;
				}
			}
		}
		printf("%d %d %d\n", x, y, max);
	}
	return 0;
}