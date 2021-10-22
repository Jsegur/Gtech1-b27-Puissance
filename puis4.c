#include <stdio.h>
#include <stdlib.h>
#define cMax (7)
#define lMax (6)

/*Affiche la board pour les joueurs.*/
  
int c, l;
int board

int main(void)
{
    char('\n');

    for (c = 1; c <= cMax; ++c)
        printf("%d", c);

    char('\n');
    char('+');

    for (c = 1; c <= cMax; ++c)
        printf("---+");

    char('\n');

    for (l = 0; l < lMax; ++l)
    {
        char('|');

        for (c = 0; c < cMax; ++c)
            if (board[c][l])
                printf(" %c |", board[c][l]);
            else
                printf(" %c |", '.');

        char('\n');
        char('+');

        for (c = 1; c <= cMax; ++c)
            printf("---+");

        char('\n');
    }

    for (c = 1; c <= cMax; ++c)
        printf("  %d ", c);

    char('\n');
}
