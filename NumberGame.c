#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Number guessing game , between 1-100

int main()
{
  int a = 0;
  srand(time(0));
  int randomNumber = rand() % 101;
  printf("Guess the number between 0-100.\n");
  scanf("%d", &a);

  while (a != randomNumber)
  {
    if (a < randomNumber)
    {
      printf("%d is samller than right number. Please guess a bigger number. \n", a);
      scanf("%d", &a);
    }

    else
    {
      printf("%d is bigger than right number. Please guess a smaller number. \n", a);
      scanf("%d", &a);
    }
  };

  if (a == randomNumber)
  {
    printf("The right number was %d. \nCongraturaltion! You won the game. ", randomNumber);
  }
  return 0;
}