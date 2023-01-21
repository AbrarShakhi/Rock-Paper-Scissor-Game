#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sources/_Option.h"
#include "sources/_RPS.h"
#include "sources/_revealYou.h"
#include "sources/_revealComp.h"
#include "sources/_reShuffle.h"

int main()
{
    int agian, you, result, comp;

    while (1)
    {

        _Option();
        scanf("%d", &you);
        fflush(stdin);
        system("cls");
        if (you == 1 || you == 2 || you == 3)
        {
            srand(time(0));
            comp = rand() % 3 + 1;
            _reShuffle(&you);

            result = _RPS(you, comp);

            if (result == 0)
                printf("*****Game draw!*****\n");
            else if (result == 1)
                printf("*****You win!*****\n");
            else if (result == -1)
                printf("*****You Lose!*****\n");

            printf("\n");

            _revealComp(comp);
            _revealYou(you);

            printf("\n");
            printf("1) play again.\n");
            printf("0) Exit the game.\n");
            printf("Enter your choice: ");

            scanf("%d", &agian);
            system("cls");
            fflush(stdin);

            if (agian != 1)
                return 0;
        }
        else
            printf("Wrong input!\n");
    }
    return 1;
}