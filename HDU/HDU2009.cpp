#include<stdio.h>
#include<math.h>
int main() {
	double n, m;
	while (~scanf("%lf%lf", &n,&m)) {
		double s = 0;
		s=n;
		for(int i=1;i<m;i++){
			s=s+sqrt(n);
			n=sqrt(n);
		}
		printf("%.2f\n", s );
	}
	return 0;
}