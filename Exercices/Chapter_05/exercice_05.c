#include <stdio.h>

int main(void)
{
  int number, digit;
  
  printf("Enter a number that you want to revert: ");
  scanf("%i", &number);
  printf("Reverted number: ");

  if (number < 0) {
    number = -number;
    
    while (number != 0) {
      digit = number % 10;
      number /= 10;
      printf("%i", digit);
    }
    
    printf("-\n");
  }
  else {
    while (number != 0) {
       digit = number % 10;
       number /= 10;
       printf("%i", digit);
    }
    
    printf("\n");
  }
  
  return 0;
}
