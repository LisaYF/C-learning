#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int comp(const void *a, const void *b) { //回调函数
	return abs(*(int*)b) - abs(*(int*)a);
}//有待考证
int main() {
	int n = 0;
	int a[105], b[105];
	while (scanf("%d", &n), n) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(a[0]), comp);//高阶函数
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