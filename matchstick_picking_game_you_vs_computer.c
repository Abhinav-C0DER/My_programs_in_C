#include <stdio.h>
int main() {
  int total_sticks = 21, player_pick, computer_pick;

  printf("-- This is matchstick picking game.\n");
  printf("-- There are total 21 matchsticks.\n");
  printf("-- YOU vs COMPUTER \n");
  printf("-- You both have to pick matchsticks alternatively.\n");
  printf("-- You can pick 1, 2, 3 or 4 matchsticks at a time\n");
  printf("-- The last one to pick the matchstick will lose the game! \n");

  for (;;) {
    if (total_sticks <= 1) {
      printf("-- There is %d matchstick left.\n", total_sticks);
      printf("-- You are forced to pick the last matchstick. 😭😭😭\n");
      printf("-- COMPUTER WINS! 🏆🏆🏆\n");
      break;
    }

    printf("-- There are %d matchsticks left.\n", total_sticks);
    printf("-- Choose the number of matchsticks to pick (1-4): ");
    scanf("%d", &player_pick);
    total_sticks -= player_pick;

    if (player_pick < 1 || player_pick > 4) {
      printf("-- You DUMB HUMAN... I am sure I was clear that you can \nonly "
             "pick 1, 2, 3 or 4 matchsticks at a time.🤡🤡🤡\n");
      break;
    }

    computer_pick = 5 - player_pick;
    printf("-- Now its my turn to pick.\n");
    printf("-- I pick %d matchsticks.\n", computer_pick);
    total_sticks -= computer_pick;
  }
  return 0;
}
