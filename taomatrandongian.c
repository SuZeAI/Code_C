#include <stdio.h>
void inmang(int n, int a[][10])
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
    int n, p, m;
    scanf("%d", &n);
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        p = 0;
        m = 0;
        while (p < i)
        {
            a[i][p] = 0;
            p++;
        }
        for (int j = i; j < n; j++)
        {
            a[i][j] = m;
            m++;
        }
    }
    inmang(n, a);
}