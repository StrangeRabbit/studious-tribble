

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "qsortwords.h"
#include "word.h"

#define exch(x, y) Item tmp = x; x = y; y = tmp;

int partition(Item a[], int l, int r, int (*less) (Item, Item))
{
    int i, j;
    Item v;
    v = a[r];
    i = l - 1;
    j = r;
    for(;;){
        while(less(a[++i], v));
        while(less(a[--j], v))
            if(j == l) break;
        if(i >= j) break;
        exch(a[i], a[j]);
    }
    exch(a[i], a[r]);
    return i;
}

void quicksort(Item a[], int l, int r, int (*less) (Item, Item))
{
    int i;
    if(r <= l) return;
    i = partition(a, l, r, less);
    quicksort(a, l, i - 1, less);
    quicksort(a, i + 1, r, less);
}

