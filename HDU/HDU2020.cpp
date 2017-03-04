#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int comp(const void *a, const void *b) { //回调函数
	return *(int*)b - *(int*)a;
}//有待考证
int main() {
	int n = 0;
	int a[105], b[105];
	while (scanf("%d", &n), n) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		//取绝对值，标记负数，排序
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] < 0) {
				b[j] = a[i];
				j++;
			}
			a[i] = abs(a[i]);
		}
		qsort(a, n, sizeof(a[0]), comp);//高阶函数
		//交换负数
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (-a[i] == b[j]) {
					a[i] = b[j];
					b[j]=0;
					break;
				}
			}

		}
		//输出
		for (int i = 0; i < n; i++) {
			if (i != 0) {
				printf(" ");
			}
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}