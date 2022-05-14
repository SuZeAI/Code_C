#include <stdio.h>
void input(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void output(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
}
int test(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}
void arrange(int n, int a[])
{
    int c = 1;
    while (test(n, a) == 0)
    {
        printf("Buoc %d:", c);
        c++;
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
            {
                int m = a[i];
                a[i] = a[i + 1];
                a[i + 1] = m;
            }
        output(n, a);
        printf("\n");
    }
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    input(n, a);
    arrange(n, a);
    return 0;
}