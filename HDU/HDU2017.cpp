#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>//strlen
int main() {
	int n = 0;
	char *a;
	scanf("%d", &n);
		while (n--) {
			int j = 0, length = 0;
			a = (char*)malloc(sizeof(char)*100);
			scanf("%s", a);//%c会把空格也吃进去,a是地址，不用&；
			length = strlen(a);//strlen求字符串长度
			for (int i = 0; i <= length; i++) {
				if ('0' <= a[i] && a[i] <= '9') {
					j++;
				}
			}
			printf("%d\n", j);
			free(a);
	}
	return 0;
}