#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int RPS(int you, int comp);
int revealyou(int you);
int revealcomp(int comp);
int main()
{
    int navigator, number, you, comp;
    start:
    srand(time(0));
    number = rand()%100 + 1;

    if(number<=33)
        comp=1;
    else if(number>33 && number<=66)
        comp=2;
    else
        comp=3;
    
    system("cls");
    printf("****************************************************************************************************\n");
    printf("\t\t\t\tRock\t\tPaper\t\tSeissor\n");
    printf("\t\tComputer has already chosen one of three.\n\t\tNow you chose.\n");
    again:
    printf("\t\t1) Scissor\n");
    printf("\t\t2) Paper\n");
    printf("\t\t3) Rock\n\n");
    printf("\t\tEnter your choice : ");
    
    scanf("%d", &you);
    fflush(stdin);
    system("cls");
    if (you!=1 && you!=2 && you!=3)
    {
        printf("\t\tWrong input!");
        goto again;
    }    
    printf("****************************************************************************************************\n\n\n");
    
    int result = RPS(you, comp);
    
    if(result==0)
        printf("\t\t*****Game draw!*****\n");
    else if(result==1)
        printf("\t\t*****You win!*****\n");
    else
        printf("\t\t*****You Lose!*****\n");

    revealcomp(comp);
    revealyou(you);

    printf("\n\n****************************************************************************************************\n\n\n");
    printf("\t\t1) play again.\n");
    printf("\t\t0) Exit the game.\n");
    printf("\t\tEnter your choice: ");

    scanf("%d", &navigator); system("cls");
    fflush(stdin);
    switch (navigator)
    {
        case 1:
            goto start;
    }
    return 0;
}

int RPS(int you, int comp)
{
    if(you == comp)
        return 0;
        
    if(you==1 && comp==3)
        return -1;
    else if(you==3 && comp==1)
        return 1;

    if(you==1 && comp==2)
        return 1;
    else if(you==2 && comp==1)
        return -1;

    if(you==3 && comp==2)
        return -1;
    else if(you==2 && comp==3)
        return 1;
}

int revealyou(int you)
{
    char youstring[8];
    switch (you)
    {
    case 1:
        youstring[0]='s';
        youstring[1]='c';
        youstring[2]='i';
        youstring[3]='s';
        youstring[4]='s';
        youstring[5]='o';
        youstring[6]='r';
        youstring[7]='\0';
        break;
    case 2:
        youstring[0]='p';
        youstring[1]='a';
        youstring[2]='p';
        youstring[3]='e';
        youstring[4]='r';
        youstring[5]='\0';
        break;
    case 3:
        youstring[0]='r';
        youstring[1]='o';
        youstring[2]='c';
        youstring[3]='k';
        youstring[4]='\0';
        break;
    }
    printf("\t\tyour choice : %s\n", youstring);

    return 0;
}

int revealcomp(int comp)
{
    char compstring[8];
    switch (comp)
    {
    case 1:
        compstring[0]='s';
        compstring[1]='c';
        compstring[2]='i';
        compstring[3]='s';
        compstring[4]='s';
        compstring[5]='o';
        compstring[6]='r';
        compstring[7]='\0';
        break;
    case 2:
        compstring[0]='p';
        compstring[1]='a';
        compstring[2]='p';
        compstring[3]='e';
        compstring[4]='r';
        compstring[5]='\0';
        break;
    case 3:
        compstring[0]='r';
        compstring[1]='o';
        compstring[2]='c';
        compstring[3]='k';
        compstring[4]='\0';
        break;
    }
    printf("\t\tcomputer's choice : %s\n", compstring);

    return 0;   
}
