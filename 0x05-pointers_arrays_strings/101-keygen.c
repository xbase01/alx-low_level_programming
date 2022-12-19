#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main(void)
{
  char password[PASSWORD_LENGTH + 1];

  // Seed the random number generator with the current time
  srand(time(NULL));

  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    // Generate a random number between 0 and 9
    int random_number = rand() % 10;

    // Convert the random number to a character
    char c = '0' + random_number;

    // Add the character to the password
    password[i] = c;
  }

  // Null-terminate the password string
  password[PASSWORD_LENGTH] = '\0';

  printf("Generated password: %s\n", password);

  return 0;
}
