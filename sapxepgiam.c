#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void sapxep(int n, int a[])
{
    int m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
}
void inmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int n, p, max;
    scanf("%d", &n);
    int a[100];
    nhapmang(n, a);
    sapxep(n, a);
    inmang(n, a);
}