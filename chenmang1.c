#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void inmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    nhapmang(n, a);
    nhapmang(m, b);
    int p;
    scanf("%d", &p);
    for (int i = n + m - 1; i >= m + p; i--)
    {
        a[i] = a[i - m];
    }
    for (int j = p; j < p + m; j++)
    {
        a[j] = b[j - p];
        n++;
    }
    inmang(n, a);
    return 0;
}