// Function to calculate the nth triangula number.

#include <stdio.h>

int triangular_num(int n)
{
     int i, t_number = 0;

     for (i = 1; i <= n; ++i) {
          t_number += i;
     }

     return t_number;
}

int main(void)
{
     printf("%i\n", triangular_num(10));
     printf("%i\n", triangular_num(20));
     printf("%i\n", triangular_num(50));
     
     return 0;
}

