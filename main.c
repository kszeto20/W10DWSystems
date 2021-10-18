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

  printMember(mom);

  printMember(dad);

  printf("%s\n", dad->next->name);
  free(mom);
  return 0;
}
