#include <stdio.h>

void print_message(void)
{
     printf("Programming is fun.\n");
}

int main(void)
{
     int i;

     for (i = 1; i <= 5; ++i) {
          print_message();
     }
     
     return 0;
}
