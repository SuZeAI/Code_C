#include <stdio.h>
void nhapnmang(int n, int a[][100])
{
    int num = n * n, b = n;
    for (int i = 1; i <= n; i++)
        a[0][i - 1] = num, num--;
    ;
    for (int j = 1; j <= b / 2; j++)
    {
        for (int k = j; k < n; k++)
            a[k][n - 1] = num, num--;
        for (int m = n - 2; m >= j - 1; m--)
            a[n - 1][m] = num, num--;
        for (int l = n - 2; l >= j; l--)
            a[l][b - n] = num, num--;
        for (int f = j; f < n - 1; f++)
            a[b + 1 - n][f] = num, num--;
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
        int n, a[100][100];
        scanf("%d", &n);
        nhapnmang(n, a);
        inmang(n, a);
    }
}