#include <stdio.h>
int main(void)
{
    int A[3][3] = {{2, 4, 3}, {3, 0, 7}, {6, 5, 8}};
    int B[3][3] = {{0, 6, 16},{2, 5, 12}, {1, 4, 10}};
    int C[10][10];
    int i;
    int j;
    int k;
    int sum;
    printf("Matrix A is:\n\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is:\n\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i<=2; i++)
    {
        for(j=0;j<=2;j++)
        {
            sum = 0;
            for(k = 0; k<=2; k++)
            {
                sum=sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    printf("Multiplication of Matrix A and Matrix B is:\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}