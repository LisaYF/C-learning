#include<stdio.h>
int main() {
	int n = 0;
	int s[101];
	while (~scanf("%d",&n)) {
		if (n == 0) {
			return 0;
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &s[i]);
		}
		//找出最小数
		int small = 0,t=0;
		small=s[0];
		for (int i = 1; i < n; i++) {
			if (small > s[i]) {
				small=s[i];
				t=i;
			}
		}
		small = s[t];
		s[t] = s[0];
		s[0] = small;
		
		for (int i = 0; i < n; i++) {
			if (i != 0) {
				printf(" ");
			}
			printf("%d", s[i]);
		}
		printf("\n");
	}
	return 0;
}