void _revealYou(int you)
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