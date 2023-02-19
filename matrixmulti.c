#include <conio.h>
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j, k;
    printf("Enter the value of matrix a:\n");
    for (i = 1; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the value of matrix b:\n");
    for (i = 1; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // multi. of metrix a and b
    for (i = 1; i < 3; i++)
    {
        for (j = 1; j < 3; j++)

        {
            c[i][j] = 0;
            for (k = 1; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    // now we printing result of multi
    printf("\nMultiplication of matrix a and b is:\n");
    printf("C:");
    for (i = 1; i < 3; i++)
    {
        printf("\n");
        for (j = 1; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    getch();
}