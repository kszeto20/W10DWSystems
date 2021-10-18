#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct fMember {char *name; int age; struct fMember *next;};

int printMember(struct fMember * p);

struct fMember * heapMember(char *n, int a);

struct fMember * insert_front(struct fMember *newP,  char *name, int age);

void print_list(struct fMember *first);

struct fMember * free_list(struct fMember * toFree);
