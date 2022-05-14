#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int thu(int i, int a[], int n)
{
    int num = 0;
    for (int j = 0; j < n; j++)
        if (i == a[j])
            num++;

    return num;
}
int main()
{
    int n, num = 0, k = 0;
    scanf("%d", &n);
    int a[100];
    nhapmang(n, a);
    for (int i = 0; i < n; i++)
    {
        if (thu(a[i], a, n) == 1)
            k++;
    }
    printf("%d\n", k);
    for (int i = 0; i < n; i++)
    {
        if (thu(a[i], a, n) == 1)
            printf("%d ", a[i]);
    }
    return 0;
}