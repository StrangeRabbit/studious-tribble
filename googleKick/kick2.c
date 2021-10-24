#include <stdio.h>
#include <stdlib.h>

#define read(x) scanf("%d", &x)
#define FOR(x) for(int i = 0; i < x; i++)

int main()
{
    long long x1, y1, x2, y2;
    int i, j;
    long long X, Y;
    int T, K;
    scanf("%d", &T);
    FOR(T){
        scanf("%d", &K);
        X = 0;
        Y = 0;
        for(j = 0; j < K; j++){
            scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
            X += (x1 + x2) / 2;
            Y += (y1 + y2) / 2;
        }
        X /= K;
        Y /= K;
        printf("Case #%d: %lld %lld\n", i, X, Y);
    }
}
