#include<stdio.h>
#include<math.h>
int main() {
	double a, s;
	while (~scanf("%lf", &a)) {
		s=fabs(a);
		printf("%.2f\n", s);
	}
	return 0;
}