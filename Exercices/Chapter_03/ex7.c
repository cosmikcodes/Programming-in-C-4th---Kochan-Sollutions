//Evaluates the expression (3.31 x 10⁻⁸ x 2.01 x 10⁻⁷) / (7.16 x 10⁻⁶ + 2.01 x 10⁻⁸)
//Displays the results using exponential format.
#include <stdio.h>

int main (void){
	
	float expression = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

	printf ("(3.31 x 10⁻⁸ x 2.01 x 10⁻⁷) / (7.16 x 10⁻⁶ + 2.01 x 10⁻⁸) = %e\n", expression);

	return 0;
}
