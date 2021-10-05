#include <stdio.h>
#include <stdlib.h>

typedef struct _track
{
    int x;
    int y;
    int cost;
    struct _track* pos;
}track;

int main(int argc, char **argv)
{
    int n = atoi(argv[1]);
    int l = atoi(argv[2]);
    int **board = (int) malloc(sizeof(int) * n * l);
    track *head = (track*) malloc(sizeof(track));
    head->x = 1;
    head->y = 1;


}

track *add_poss(track* stt, int n, int l)
{
    if(in_board(stt->x, stt->y + 1, n, l) == 1){
        stt->pos = (track*) malloc(sizeof(track)){
            
        }
    }
}

int in_board(int x, int y, int n, int l)
{
    if(x < l && x >= 0 && y < n && y >= 0)
        return 1;
    else
        return 0;
}
