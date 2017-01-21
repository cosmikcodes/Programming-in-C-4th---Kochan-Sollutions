//Calculate the polynomial 3x³ - 5x² + 6 using x = 2.55
#include <stdio.h>

int main(void){

	float x = 2.55;
	float pol = 3*x*x*x - 5*x*x + 6;

	printf( "For x = %g\nThe polynomial 3x³ - 5x² + 6 = %g\n", x, pol );

	return 0;
}
