#include <stdio.h>
void nhapmang(int n, int a[], int b[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void inmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void xapxep1(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
}
void xapxep(int n, int a[], int b[])
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        xapxep1(i + 1, b);
        printf("Buoc %d: ", i);
        inmang(i + 1, b);
        printf("\n");
    }
}
int main()
{
    int n, a[100], b[100];
    scanf("%d", &n);
    nhapmang(n, a, b);
    xapxep(n, a, b);
    return 0;
}