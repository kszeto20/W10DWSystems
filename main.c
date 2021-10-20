#include <stdio.h>
#include <stdlib.h>
#include "famM.h"

int main() {
  printf("Good New Everyone!\n");

  srand(time(NULL));

  char  m[] = "Vicki";
  int a = (rand() / 100000000) + 4;

  struct fMember *mom = heapMember(m, a);

  char  d[] = "Chiu";
  int ag = 50;

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
  printf("----------------\n");
  struct fMember * cutList = remove_node(uncle, 50);

  print_list(cutList);

  struct fMember *toHold = free_list(uncle);
  //printf("%s\n", toHold->name);
  return 0;
}
