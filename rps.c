#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void) {
  char rps[17];
  printf("please enter rock, paper, or scissors: ");
  scanf("%s", rps);
  char comp[17];
  int random = rand() % 3;
  if(random == 0)
  {
    strcpy(comp, "rock");
  }
  if(random == 1)
  {
    strcpy(comp, "paper");
  }
  if(random == 2)
  {
    strcpy(comp, "scissors");
  }
  printf("computer chose %s\n", comp);
  for(int i = 0; i < strlen(rps); i++)
    {
      for(int j = 0; j < strlen(comp); j++)
        {
          if(rps[i] == comp[j])
          {
            printf("tie\n");
          }
          else if( 
          (rps[i] == 'r' && comp[j] == 's') || 
          (rps[i] == 'p' && comp[j] == 'r') ||
          (rps[i] == 's' && comp[j] == 'p')) 
          {
            printf("you win\n");
            return 0;
          }
          else printf("you lose\n");
          return 0;
        }
    }
}