#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double n, b, a;
	printf("Input n ");
	scanf("%lf", &n);

	printf("Input b ");
	scanf("%lf", &b);
	printf("Input a ");
	scanf("%lf", &a);

	double l = n / a;
	printf("div %f\n", l);
	printf("%f / %f = %f\n", n, a, n / a);

	int c = b + n;
	printf("sum %d\n", c);
	printf("%f + %f = %f\n", b, n, b + n);

	double z = l * c;
	printf("pow %f\n", z);
	printf("%f * %d = %f\n", l, c, l * c);

	return 0;

}