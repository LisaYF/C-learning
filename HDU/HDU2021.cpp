#include<stdio.h>
int main() {
	int n = 0;
	int a[100];
	//输入
	while (scanf("%d", &n), n) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		//计算X
		int s=0;
		for (int i = 0; i < n; i++) {
			int x=0;
			//100 有几个100
			x = a[i] / 100;
			//50 有几个50 如果87
			if (((a[i] - (x * 100)) / 10) >= 5) {
				x = x + ((a[i] - (x * 100)) / 10) - 5 + 1;
			}
			else {//如果37
				x = x + (a[i] - (x * 100)) / 10;
			}
			//5 个位数是否大于5 如果7
			int ge=a[i] - ((a[i] / 100) * 100)-(a[i] - (a[i] / 100) * 100)/10*10;
			if ( ge >= 5) {
				x = x + 1;
				//2如果 4
				if ((ge - 5) >= 2) {
					x = x + (ge - 5) / 2;
					x = x + (ge - 5) - ((ge- 5) / 2) * 2;
				}
				else {
					x = x + (ge - 5);
				}
			}
			else {
				if (ge >= 2) {
					x = x + ge / 2;
					x = x + ge - (ge / 2) * 2;
				}
				else {
					x = x + ge;
				}
			}
			s=x+s;
		}
		printf("%d\n",s);
	}
	return 0;
}