#include <stdio.h>
void nhapmang(int m, int a[][10])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
}
void inmang(int m, int a[][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void doicheo(int m, int a[][10])
{
    for (int i = 0; i < m; i++)
    {
        int p = a[i][m - 1 - i];
        a[i][m - i - 1] = a[i][i];
        a[i][i] = p;
    }
}
int main()
{
    int m, a[10][10];
    scanf("%d", &m);
    nhapmang(m, a);
    doicheo(m, a);
    inmang(m, a);
}