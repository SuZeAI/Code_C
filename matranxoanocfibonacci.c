#include <stdio.h>
#include <math.h>
void taoB(int n, int b[])
{
    int num = 2;
    b[0] = 0, b[1] = 1;
    while (num < pow(n, 2))
    {
        b[num] = b[num - 1] + b[num - 2];
        num++;
    }
}
void nhapnmang(int n, int a[][100], int c[])
{
    int num = 0, b = n;
    for (int i = 1; i <= n; i++)
        a[0][i - 1] = c[num], num++;
    ;
    for (int j = 1; j <= b / 2; j++)
    {
        for (int k = j; k < n; k++)
            a[k][n - 1] = c[num], num++;
        for (int m = n - 2; m >= j - 1; m--)
            a[n - 1][m] = c[num], num++;
        for (int l = n - 2; l >= j; l--)
            a[l][b - n] = c[num], num++;
        for (int f = j; f < n - 1; f++)
            a[b + 1 - n][f] = c[num], num++;
        n--;
    }
}
void inmang(int n, int a[][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int n, a[100][100], b[1000];
    scanf("%d", &n);
    taoB(n, b);
    nhapnmang(n, a, b);
    inmang(n, a);
}