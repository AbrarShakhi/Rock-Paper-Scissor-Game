int _RPS(int you, int comp)
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