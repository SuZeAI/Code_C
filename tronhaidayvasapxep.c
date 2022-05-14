#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void sapxept(int n, int a[])
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
void sapxepg(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
}
int main()
{
    int t, c = 0;
    scanf("%d", &t);
    while (c < t)
    {
        int n, a[100], b[100];
        scanf("%d", &n);
        nhapmang(n, a);
        nhapmang(n, b);
        sapxept(n, a);
        sapxepg(n, b);
        printf("Test %d:\n", c + 1);
        for (int i = 0; i < n; i++)
            printf("%d %d ", a[i], b[i]);
        printf("\n");
        c++;
    }
}