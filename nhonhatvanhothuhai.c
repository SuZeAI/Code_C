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
            if (a[i] > a[j])
            {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
}
int main()
{
    int n, min;
    scanf("%d", &n);
    int a[100];
    nhapmang(n, a);
    sapxep(n, a);
    min = a[1];
    for (int i = 1; i < n; i++)
    {
        if (min == a[0])
            min = a[i + 1];
    }
    printf("%d %d", a[0], min);
    return 0;
}