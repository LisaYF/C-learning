#include<stdio.h>
int main() {
	double n, s;
	while (~scanf("%lf", &n)) {
		if (n != 0) {
			double a = 0, b = 0, c = 0;
			for (int i = 1; i <= n; i++) {
				scanf("%lf", &s);
				if (s < 0) {
					a++;
				}
				else if (s == 0) {
					b++;
				}
				else  {
					c++;
				}
			}
			printf("%.f %.f %.f\n", a, b, c );
		}
		else {
			return 0;
		}

	}


}