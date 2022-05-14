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
    scanf("%d", &n);
    int a[n];
    nhapmang(n, a);
    for (int j = 0; j < n / 2; j++)
    {
        m = a[j];
        a[j] = a[n - 1 - j];
        a[n - 1 - j] = m;
    }
    inmang(n, a);
    return 0;
}