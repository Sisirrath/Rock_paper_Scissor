#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generatrnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }

   else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else  if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
     else  if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int players = 0, comps = 0, temp;
    char playerch, comch;
    char dict[] = {'r', 'p', 's'};
    printf("WELCOME TO ROCK,PAPER,SCISSOR.\n");
    for (int i = 0; i < 3; i++)
    {
        printf("CHOOSE 1 FOR ROCK,2 FOR PAPER,3 FOR SCISSOR \n");
        printf("player 1 turn:\n");
        scanf("%d", &temp);
        getchar();
        playerch = dict[temp - 1];
        printf("YOU CHOOSE %c\n\n",playerch);

        printf("CHOOSE 1 FOR ROCK,2 FOR PAPER,3 FOR SCISSOR \n");
        printf("COMPUTER turn:\n");
        temp = generatrnumber(3) + 1;
        comch = dict[temp - 1];
         printf("COM CHOOSE %c\n\n",comch);

        if (greater(comch, playerch) == 1)
        {
            comps += 1;
            printf("COM WIN\n");
        }
        else if (greater(comch, playerch) == -1)
        {
            comps += 1;
            players += 1;
            printf("ITS A DRAW\n");
        }
        else
        {
            players += 1;
            printf("YOU WIN\n");
        }
        printf("YOU : %d\n COM : %d\n",players,comps);
    }

    if (players > comps)
    {
        printf("YOU WIN THE GAME\n");
    }
    else if (players < comps)
    {
        printf("COMPUTER WIN THE GAME\n");
    }
    else
    {
        printf("ITS A DRAW MATCH\n");
    }
    
    return 0;
}