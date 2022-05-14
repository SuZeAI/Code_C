#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void capbang(int n, int a[], int *num)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            *num = *num + 1;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, num = 0;
        scanf("%d", &n);
        int a[100];
        nhapmang(n, a);
        capbang(n, a, &num);
        printf("%d\n", num);
    }
    return 0;
}