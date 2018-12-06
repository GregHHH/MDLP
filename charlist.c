#include <stdlib.h>
#include <assert.h>
#include "charlist.h"

struct CharList 
{
  char head;
  char *tail;
};

CharList *CharList_nil (char head)
{
  int *p;
  *p == NULL;
  return(*p);
}

CharList *CharList_cons (char head, CharList *tail)
{
void *malloc(sizeof(char));
}

char CharList_head (CharList *self)
{
printf ();
}

CharList *CharList_tail (CharList *self)
{
  // TODO
}

void CharList_delete (CharList *self)
{
  // TODO
}

int CharList_isEmpty (CharList *self)
{
  // TODO
}

/* ----- */

int CharList_has (CharList *self, char c)
{
  return 0; // TODO
}

CharList *CharList_insert (CharList *self, char c)
{
  return NULL; // TODO
}

CharList *CharList_remove (CharList *self, char c)
{
  return NULL; // TODO
}
