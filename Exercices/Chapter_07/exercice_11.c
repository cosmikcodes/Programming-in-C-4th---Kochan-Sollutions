// Sum the elements of an array.

#include <stdio.h>

int main(void)
{
    int arraySum(int array[], int n);
	int array1[4] = {2, 3, 5, 18};
	
	printf("Sum = %i\n", arraySum(array1, 4));
    return 0;
}


// Function to sum array elements.
int arraySum(int array[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += array[i];
	}

	return sum;
}
