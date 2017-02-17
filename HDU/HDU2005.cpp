#include<stdio.h>
struct Date {
	int year, month, day;
};
int main() {
	struct Date date;
	int d = 0, y = 0; //y=0表示平年，y=1表示闰年
	int a[13];
	a[1] = 31; a[3] = 31; a[5] = 31; a[7] = 31; a[8] = 31; a[10] = 31; a[12] = 31;
	a[4] = 30; a[6] = 30; a[9] = 30; a[11] = 30;

	while (~scanf("%d/%d/%d", &date.year, &date.month, &date.day)) {
		date.year % 100 == 0 ? date.year % 400 == 0 ? y = 1 : y = 0 : date.year % 4 == 0 ? y = 1 : y = 0;
		if (y == 1) {
			a[2] = 29;
		}
		else {
			a[2] = 28;
		}
		int m = 0;
		for (int i = date.month - 1; i > 0; i--) {
			m = m + a[i];
		}
		d = m + date.day;
		printf("%d\n", d);
	}
	return 0;
}