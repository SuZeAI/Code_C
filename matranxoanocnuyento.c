#include <stdio.h>
#include <math.h>
int tapnto(int n)
{
    for (int j = 2; j <= sqrt(n); j++)
        if (n % j == 0)
            return 0;
    return 1;
}
void taoB(int n, int b[])
{
    int num = 0;
    for (int i = 2; num < pow(n, 2); i++)
    {
        if (tapnto(i) == 1)
            b[num] = i, num++;
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
    int t, c = 1;
    scanf("%d", &t);
    while (t--)
    {
        printf("Test %d:\n", c);
        c++;
        int n, a[100][100], b[1000];
        scanf("%d", &n);
        taoB(n, b);
        nhapnmang(n, a, b);
        inmang(n, a);
    }
}