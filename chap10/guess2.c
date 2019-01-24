#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100000

/*prototypes*/
void initialize_number_generator(void);
int new_secret_number(void);
void read_guess(int secret_number);

int main(void)
{
  char command;
  int secret_number;

  printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
  initialize_number_generator();
  do{
    secret_number = new_secret_number();
    printf("A new number has been chosen.\n");
    read_guess(secret_number);
    printf("Play again? (Y/N) ");
    scanf("%s", &command);
    printf("\n");
  }while(command == 'y' || command =='Y');

  return 0;
}

void initialize_number_generator(void){
  srand((unsigned) time(NULL));
}

int new_secret_number(void){
   return rand() % MAX_NUMBER + 1;
}

void read_guess(int secret_number){
  int guess, num_guess = 0;
  for(;;){
    num_guess++;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    if(guess == secret_number){
      printf("You won in %d guesses!\n", num_guess);
      return;
    }
    else if(guess < secret_number)
      printf("Too low; try again.\n");
    else
      printf("Too high; try again.\n");
  }
}
