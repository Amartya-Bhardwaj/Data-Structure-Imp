#include <stdio.h>

int roundNo(float num)
{
    return num < 0 ? num - 0.5 : num + 0.5;
}

void algo(float A[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            A[i][j] = roundNo(A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%0.2f ",A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float A[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
    algo(A);
    return 0;
}