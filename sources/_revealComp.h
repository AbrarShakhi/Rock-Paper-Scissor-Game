void _revealComp(int comp)
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