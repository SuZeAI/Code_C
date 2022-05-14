#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int max(int n, int a[])
{
    int max;
    max = a[0];
    for (int j = 1; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
    }
    return max;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[100], b;
        scanf("%d", &n);
        nhapmang(n, a);
        b = max(n, a);
        printf("%d\n", b);
        for (int i = 0; i < n; i++)
        {
            if (b == a[i])
                printf("%d ", i);
        }
        printf("\n");
    }
}