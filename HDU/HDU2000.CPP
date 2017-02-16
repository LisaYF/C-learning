#include<stdio.h>
int  main() {
	char A , B, C, Max, Min;
	while (~scanf("%c%c%c%*c", &A, &B, &C)) {
		Max = (A > B ? A : B) > C ? (A > B ? A : B) : C;
		Min = (A < B ? A : B) < C ? (A < B ? A : B) : C;
		printf("%c %c %c\n", Min, A + B + C - Max - Min, Max );
	}
	return 0;
}