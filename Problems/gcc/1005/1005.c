#include <stdio.h>

int main(void) {
	double a,b;
	while(scanf("%lf%lf",&a,&b)!=EOF)
		printf("MEDIA = %.5f\n", (a*3.5 + b*7.5)/11);
	return 0;
}
