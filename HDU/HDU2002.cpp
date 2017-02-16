#include<stdio.h>
#define PI (3.1415927)
int main() {
	double r, v;
	while (~scanf("%lf", &r)) {
		v=PI*r*r*r*((double)4/3);
		printf("%.3f\n", v);
	}
	return 0;
}