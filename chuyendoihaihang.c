#include <stdio.h>
void nhapmang(int m, int n, int a[][10])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void doihang(int n, int b, int c, int a[][10])
{
    for (int i = 0; i < n; i++)
    {
        int doi = a[b][i];
        a[b][i] = a[c][i];
        a[c][i] = doi;
    }
}
void inmang(int m, int n, int a[][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int m, n, a[10][10];
    scanf("%d%d", &m, &n);
    nhapmang(m, n, a);
    int b, c;
    scanf("%d%d", &b, &c);
    doihang(n, b - 1, c - 1, a);
    inmang(m, n, a);
}