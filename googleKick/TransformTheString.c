#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>

#define read(A) scanf("%d", &A)
#define Sread(A) scanf("%s", A)
#define len(A) strlen(A)
#define module(A) A < 0 ? (-1 * A) : A

int T;
char S[100000], F[100000000];

int solve()
{
    int y, dist, min;
    Sread(S);
    Sread(F);
    y = 0;
    for(int i = 0; i < len(S); i++){
        min = INT_MAX;
        for(int j = 0; j < len(F); j++){
            dist = S[i] - F[j];
            if(dist < 0) dist *= -1;

            if(dist < min) min = dist;
            if(min == 0) break;
        }
        
        y += min;
    }
    return y;
} 

int main()
{

    read(T);
    for(int i = 1; i <= T; i++)
    {
        printf("Case #%d: %d\n", i, solve());
    }

}

