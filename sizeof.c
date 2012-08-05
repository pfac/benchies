#include <stdio.h>
#include <limits.h>

int main ()
{
#ifdef	_LP64
	printf("Running for 64 bits.\n");
#else
	printf("Running for 32 bits.\n");
#endif
	printf("int: %lu bytes\n", sizeof(int) );
	printf("long: %lu bytes\n", sizeof(long) );
	printf("long long: %lu bytes\n", sizeof(long long) );
	printf("unsigned: %lu bytes\n", sizeof(unsigned) );
	printf("long unsigned: %lu bytes\n", sizeof(long unsigned) );
	printf("long long unsigned: %lu bytes\n", sizeof(long long unsigned) );

	printf("float: %lu bytes\n", sizeof(float) );
	printf("double: %lu bytes\n", sizeof(double) );
	printf("\n");

	printf("ULONG_MAX: %lu\n", ULONG_MAX );


	printf(" 1.0  /  0.0  = %lf\n", 1.0 / 0.0);
	printf("-1.0  /  0.0  = %lf\n", -1.0 / 0.0);
	printf(" 1.0  / -0.0  = %lf\n", 1.0 / -0.0);
	printf("-1.0  / -0.0  = %lf\n", -1.0 / -0.0);
	printf(" 0.0  /  0.0  = %lf\n", 0.0 / 0.0);
	printf("-0.0  / -0.0  = %lf\n", -0.0 / -0.0);

	double inf = 1.0 / 0.0;

	printf("inf = 1.0 / 0.0 : %lf\n", inf);

	printf(" 1.0f /  0.0f = %f\n", 1.0f / 0.0f);
	printf("-1.0f /  0.0f = %f\n", -1.0f / 0.0f);
	printf(" 1.0f / -0.0f = %f\n", 1.0f / -0.0f);
	printf("-1.0f / -0.0f = %f\n", -1.0f / -0.0f);
	printf(" 0.0f /  0.0f = %lf\n", 0.0f / 0.0f);
	printf("-0.0f / -0.0f = %lf\n", -0.0f / -0.0f);


	return 0;
}
