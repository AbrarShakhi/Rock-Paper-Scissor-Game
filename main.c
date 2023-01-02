#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RPS(int you, int comp);
void revealyou(int you);
void revealcomp(int comp);
void option();

int main()
{
    int agian, number, you, result, comp;
    srand(time(0));
    number = rand() % 100 + 1;

    if (number <= 33)
        comp = 1;
    else if (number > 33 && number <= 66)
        comp = 2;
    else
        comp = 3;

    while (1)
    {
        option();
        scanf("%d", &you);
        fflush(stdin);
        system("cls");
        if (you == 1 || you == 2 || you == 3)
        {
            result = RPS(you, comp);

            if (result == 0)
                printf("*****Game draw!*****\n");
            else if (result == 1)
                printf("*****You win!*****\n");
            else if (result == -1)
                printf("*****You Lose!*****\n");

            printf("\n");

            revealcomp(comp);
            revealyou(you);

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
}

int RPS(int you, int comp)
{
    if (you == comp)
        return 0;

    if (you == 1 && comp == 3)
        return -1;
    else if (you == 3 && comp == 1)
        return 1;

    if (you == 1 && comp == 2)
        return 1;
    else if (you == 2 && comp == 1)
        return -1;

    if (you == 3 && comp == 2)
        return -1;
    else if (you == 2 && comp == 3)
        return 1;
}

void revealyou(int you)
{
    char youstring[8];
    switch (you)
    {
    case 1:
        youstring[0] = 's';
        youstring[1] = 'c';
        youstring[2] = 'i';
        youstring[3] = 's';
        youstring[4] = 's';
        youstring[5] = 'o';
        youstring[6] = 'r';
        youstring[7] = '\0';
        break;
    case 2:
        youstring[0] = 'p';
        youstring[1] = 'a';
        youstring[2] = 'p';
        youstring[3] = 'e';
        youstring[4] = 'r';
        youstring[5] = '\0';
        break;
    case 3:
        youstring[0] = 'r';
        youstring[1] = 'o';
        youstring[2] = 'c';
        youstring[3] = 'k';
        youstring[4] = '\0';
        break;
    }
    printf("your choice : %s\n", youstring);
}

void revealcomp(int comp)
{
    char compstring[8];
    switch (comp)
    {
    case 1:
        compstring[0] = 's';
        compstring[1] = 'c';
        compstring[2] = 'i';
        compstring[3] = 's';
        compstring[4] = 's';
        compstring[5] = 'o';
        compstring[6] = 'r';
        compstring[7] = '\0';
        break;
    case 2:
        compstring[0] = 'p';
        compstring[1] = 'a';
        compstring[2] = 'p';
        compstring[3] = 'e';
        compstring[4] = 'r';
        compstring[5] = '\0';
        break;
    case 3:
        compstring[0] = 'r';
        compstring[1] = 'o';
        compstring[2] = 'c';
        compstring[3] = 'k';
        compstring[4] = '\0';
        break;
    }
    printf("computer's choice : %s\n", compstring);
}
void option()
{
    printf("Computer has already chosen one of three.\nNow you chose.\n");
    printf("1) Scissor\n");
    printf("2) Paper\n");
    printf("3) Rock\n\n");
    printf("Enter your choice : ");
}
