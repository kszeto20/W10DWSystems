#include <stdio.h>
#include <stdlib.h>
#include "famM.h"

int main() {
  printf("Good New Everyone!\n");

  srand(time(NULL));

  char  m[] = "Vicki";
  int a = (rand() / 100000000) + 40;

  struct fMember *mom = heapMember(m, a);

  char  d[] = "Chiu";
  int ag = (rand() / 100000000) + 40;

  struct fMember *dad = insert_front(mom, d, ag);

  char  g[] = "Chui";
  int age = (rand() / 100000000) + 60;

  struct fMember *gMa = insert_front(dad, g, age);

  char  au[] = "Karen";
  int aage = (rand() / 100000000) + 30;

  struct fMember *aunt = insert_front(gMa, au, aage);

  char  u[] = "Jason";
  int uage = (rand() / 100000000) + 40;

  struct fMember *uncle = insert_front(aunt, u, uage);

  print_list(uncle);
  //
  //
  // printMember(mom);
  //
  // printMember(dad);
  //
  // printf("%s\n", dad->next->name);
  // free(mom);
  // free(dad);
  return 0;
}
