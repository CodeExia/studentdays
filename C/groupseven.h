
int dividebythree(int array[][3], int column, int row)
{
    for (int i = 0; i < column; i++)
        for (int j = 0; j < row; j++)
            {
                if ((array[i][j]%3) > 0)
                    continue;
                else
                    printf("%d is divisible by three, and can be found at [%d][%d].\n", array[i][j], i,j);
            }
    return 0;
}