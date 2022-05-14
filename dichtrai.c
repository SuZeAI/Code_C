#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void left(int p, int a[], int n)
{
    int m;
    for (int j = 0; j < p; j++)
        for (int i = 0; i < n - 1; i++)
        {
            m = a[i];
            a[i] = a[i + 1];
            a[i + 1] = m;
        }
}
void inmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int n, p;
    scanf("%d", &n);
    int a[100];
    nhapmang(n, a);
    scanf("%d", &p);
    left(p, a, n);
    inmang(n, a);
}