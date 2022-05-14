#include <stdio.h>
typedef struct NO
{
    int so, dem;
} N;
int num_up(int n)
{
    int c = n % 10, b;
    n = n / 10;
    while (n > 0)
    {
        b = n % 10;
        if (b > c)
            return 0;
        c = b;
        n /= 10;
    }
    return 1;
}
int find(N a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].so == x)
            return i;
    }
    return -1;
}
void arange(N b[], int i)
{
    for (int j = 0; j < i; j++)
    {
        for (int m = j + 1; m < i; m++)
            if (b[j].dem < b[m].dem)
            {
                N a = b[j];
                b[j] = b[m];
                b[m] = a;
            }
    }
}
int main()
{
    N a[100001];
    int n = 0;
    int x;
    while (scanf("%d", &x) != -1)
    {
        if (num_up(x))
        {
            int idx = find(a, n, x);
            if (idx != -1)
            {
                a[idx].dem++;
            }
            else
            {
                a[n].so = x;
                a[n].dem = 1;
                n++;
            }
        }
    }
    arange(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", a[i].so, a[i].dem);
    }
}