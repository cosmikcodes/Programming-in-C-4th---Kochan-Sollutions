#include <stdio.h>
#include <stdbool.h>

int main(void)
{
     float num, sum;
     char opt;
     bool flag = true;

     printf("Begin calculations.\n");

     while (flag) {
          scanf("%f %c", &num, &opt);

          switch (opt) {
          case 'S': {
               sum = num;
               break;
          }
          case 'E': {
               flag = false;
               break;
          }
          case '+': {
               sum += num;
               break;
          }
          case '-': {
               sum -= num;
               break;
          }
          case '/': {
               if (num == 0) {
                    printf("Division by 0!\n");
               }
               else {
                    sum /= num;
               }
               break;
          }
          case '*': {
               sum *= num;
               break;
          }
          default:
               printf("Ivalid operator!\n");
               break;
          }

          printf("sum = %.3f\n", sum);
     }

     return 0;
}
