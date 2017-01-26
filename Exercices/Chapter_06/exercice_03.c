#include <stdio.h>
#include <stdbool.h>

int main(void)
{
     int ratingCounters[11], i, response;
     int validResponses = 0;

     // Set ratingCounters elements to 0.
     
     for (i = 1; i < 11; ++i) {
          ratingCounters[i] = 0;
     }

     // Write the responses.
     
     printf("Enter your responses:\n");

     while (true) {
          scanf("%i", &response);

          if (response == 999) {
               break;
          }
          else if (response < 0 || response > 10) {
               printf("Invalid response: %i\n", response);
          }
          else {
               ++ratingCounters[response];
               ++validResponses;
          }
     }

     printf("\n\nRating    Number of Responses\n");
     printf("------- ----------------------\n");

     for (i = 1; i <= 10; ++i) {
          printf("%4i%14i\n", i, ratingCounters[i]);
     }
     
     printf("-------------------------------\n");
     printf("Valid responses = %i\n", validResponses);
     
     return 0;
}
