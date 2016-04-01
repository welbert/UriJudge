#include <stdio.h>

int main(void) {
	double a,b,c;
	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
		printf("MEDIA = %.1lf\n",(a*2 + b*3 + c*5)/10);
	return 0;
}
