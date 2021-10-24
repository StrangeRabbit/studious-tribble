#include <stdio.h>
#include <stdlib.h>


void done(int i, int result)
{
	if(result == 0) printf("Case #%d: NO\n",i);
	else printf("Case #%d: YES\n",i);
}

int main()
{
    int cases;
	int D, M, N, i, j;
	long long C;
	int d;
	int flag;
    char *array;
	scanf("%d", &cases);
	for(i = 1; i <= cases; i++){
		scanf("%d %d %lld %d", &N, &D, &C, &M);
		array = (char*) malloc(N + 1);
		array[N] = '\0';
		d = 0;
		flag = 1;
		for(j = 0; j < N+1; j++)
		{
			scanf("%c", &array[j]);
			if(array[j] == 'D')
				d++;
		}
		/*
		printf("N: %d\n", N);
		printf("%s\n", array);
		printf("dogs: %d\n", d);
		*/
		if(d > D){
			done(i, 0);
			free(array);
			continue;
		}
		for(j = 0; j < N + 1; j++){
			if(array[j] == 'D'){
				D--;
				d--;
				C += M;
			}
			if(d == 0) break;
			if(array[j] == 'C')
				C--;
			if(C < 0 || D < 0) {
				flag = 0;
				break;
			}
		}
		done(i, flag);
		free(array);
	}
}
