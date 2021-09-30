#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void quick_find(int N)
{
    int p, q, t, i;
    int *id = (int *) malloc(N * sizeof(int));
    for(i = 0; i < N; i++) id[i] = i;
    while(scanf("%d %d", &p, &q) == 2){
        if(id[p] == id[q]) continue;
        t = id[p];
        for(i = 0; i < N; i++)
            if(id[i] == t) id[i] = id[q];
        printf(" %d %d\n", p, q);
    }
}

void quick_union(int N)
{
    int p, q, j, i;
    int *id = (int *) malloc(N * sizeof(int));
    for(i = 0; i < N; i++) id[i] = i;
    while(scanf("%d %d", &p, &q) == 2){
        i = p;
        j = q;
        while(i != id[i]) i = id[i];
        while(j != id[j]) j = id[j];
        if(i == j) continue;
        id[i] = j;
        printf(" %d %d\n", p, q);
    }
}

void weighted_union(int N)
{
    int i, j, p, q;
    int *id = (int*) malloc(N * sizeof(int));
    int *sz = (int*) malloc(N * sizeof(int));
    for(i = 0; i < N; i++){
        id[i] = i;
        sz[i] = 1;
    }
    while(scanf("%d %d", &p, &q) == 2){
        for(i = p; id[i] != i; i = id[i]);
        for(i = q; id[j] != j; j = id[j]);
        if(sz[i] < sz[j]){
            id[j] = i;
            sz[i] += sz[j];
        }
        else{
            id[i] = j;
            sz[j] += sz[i];
        }
        printf(" %d %d\n", p, q);
    }
}