#include <stdio.h>

int main(void) {
	double a,area;
	while(scanf("%lf",&a)!=EOF){
		area = 3.14159 * a * a;
		printf("A=%.4lf\n", area);
	}
	return 0;
}
