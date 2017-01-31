// Function to calculate the nth triangula number.

#include <stdio.h>

void triangular_num(int n)
{
     int i, t_number = 0;

     for (i = 1; i <= n; ++i) {
          t_number += i;
     }

     printf("Triangular number %i is %i\n", n, t_number);
}

int main(void)
{
     triangular_num(10);
     triangular_num(20);
     triangular_num(50);
     
     return 0;
}
