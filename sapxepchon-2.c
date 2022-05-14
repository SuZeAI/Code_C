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
int min(int n, int a[], int j)
{
    int min1 = a[j], num = j;
    for (int i = j + 1; i < n; i++)
        if (min1 > a[i])
            min1 = a[i], num = i;
    return num;
}
void xapxep(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int num = min(n, a, i), m = a[i];
        a[i] = a[num];
        a[num] = m;
        inmang(n, a);
        printf("\n");
    }
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    nhapmang(n, a);
    xapxep(n, a);
    return 0;
}