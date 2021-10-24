#ifndef _QSORTWORDS_H_
#define _QSORTWORDS_H_

#include "defs.h"

void quicksort(Item a[], int l, int r, int (*less) (Item, Item));

#endif
