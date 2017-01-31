// Program to calculate x.

#include <stdio.h>

// Global variables.
float g_a, g_b, g_c;


int main(void)
{
	// Declarations.
	void setConstants(void);
	float absoluteValue(float x);
	float squareRoot(float x);
	void calculateRoots(float a, float b, float c);
	
    setConstants();
	calculateRoots(g_a, g_b, g_c);
	
    return 0;
}


// Function to set constants.
void setConstants(void)
{
	float x;

	printf("--- ax² + bx + c = 0 ---\n");
	printf("Enter the constants.\n");

	printf("a: ");
	scanf("%f", &g_a);
	
	printf("b: ");
	scanf("%f", &g_b);

	printf("c: ");
	scanf("%f", &g_c);

	x = g_b*g_b - 4*g_a*g_c;

	if (x < 0) {
		printf("Imaginary roots.\n\n");
		setConstants();
	}

	if (g_a == 0) {
		printf("Division by 0 - 'a' cannot be 0.\n\n");
		setConstants();
	}
}


// Funtion to determine the absolute value.
float absoluteValue(float x)
{
     if (x < 0) {
          x = -x;
     }

     return x;
}


// Function to compute the square root of a number.
float squareRoot(float x)
{
     const float epsilon = .00001;
     float guess = 1.0;

     while (absoluteValue(guess * guess - x) >= epsilon) {
          guess = (x / guess + guess) / 2.0;
     }

     return guess;
}


// Funtion to calculate and display the roots.
void calculateRoots(float a, float b, float c)
{
	float x1 = (-b + squareRoot(b*b - 4*a*c))/(2*a);
	float x2 = (-b - squareRoot(b*b - 4*a*c))/(2*a);

	printf("\n");
	printf("x1 = %.3f\n", x1);
	printf("x2 = %.3f\n", x2);
}






