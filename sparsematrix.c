#include <stdio.h>
int main()
{
    int a[2][2] = {{0, 0}, {4, 5}};
    int i, j, z, nz;
    for (i = 0; i < 2; i++)
        ;
    for (j = 0; j < 2; j++)
        ;
    {
        if (a[i][j] == 0)
        {
            z++;
        }
        else
            nz++;
    }
    return 0;
}