#include <stdio.h>
#include <stdlib.h>

void printer(int N, char *word);

int main(int argc, char **argv)
{
	if(argc != 3)
		return 0;
	printer(atoi(argv[1]), argv[2]);

	return 0;
}

void printer(int N, char *word){
	for(unsigned int i = 0; i < N; i++){
		printf("%s\n", word);
	}
}
