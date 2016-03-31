#include <stdio.h>

int main(void) {
	long a,b;
	while(scanf("%ld%ld",&a,&b)!=EOF)
		printf("PROD = %ld\n", a*b);
	return 0;
}
