// Program to convert a positive number integer to another base.

#include <stdio.h>

void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;


int main(void)
{
     getNumberAndBase();
     convertNumber();
     displayConvertedNumber();
     
     return 0;
}


// Get number and base value.
void getNumberAndBase(void)
{
     printf("Number to be converted: ");
     scanf("%i", &numberToConvert);

     printf("Base: ");
     scanf("%i", &base);

     if (base < 2 || base > 16) {
          printf("Bad base - must be between 2 and 16\n");
          base = 10;
     }
}


// Function to convert the number.
void convertNumber(void)
{
     do
     {
          convertedNumber[digit] = numberToConvert % base;
          ++digit;
          numberToConvert /= base;
     } while (numberToConvert != 0);
}


// Display the converted number.
void displayConvertedNumber(void)
{
     const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                                  '9', 'A', 'B', 'C', 'D', 'E', 'F'};
     int nextDigit;

     printf("Converted number: ");

     for (--digit; digit >= 0; --digit) {
          nextDigit = convertedNumber[digit];
          printf("%c", baseDigits[nextDigit]);
     }

     printf("\n");
}

