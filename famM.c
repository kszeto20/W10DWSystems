#include "famM.h"
#include <stdlib.h>
#include <stdio.h>

int printMember(struct fMember * p) {
  printf("This is %s, they are %d years old\n", p->name, p->age);
  return 0;
}

struct fMember * heapMember(char *n, int a) {
  struct fMember *p = malloc(sizeof(struct fMember));
  p->name = n;
  p->age = a;
  p->next = NULL;
  // p is pointer || * makes the deref
  return p;
}


struct fMember * insert_front(struct fMember *newP,  char *name, int age) {
  struct fMember *newGuy = heapMember(name, age);
  newGuy->next = newP;
  return newGuy;
}

void print_list(struct fMember *first) {
  while (first) {
    printMember(first);
    first = first->next;
  }
}

struct fMember * free_list(struct fMember * toFree) {
  while(toFree) {
    struct fMember *nToFree = toFree->next;
    free(toFree);
    toFree = nToFree;
  }
  return toFree;
}
