#include <stdio.h>
void input(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int find(int n, int a[])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                return i;
    return -1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[100000];
        scanf("%d", &n);
        input(n, a);
        int idx = find(n, a);
        if (idx == -1)
            printf("NO\n");
        else
            printf("%d\n", a[idx]);
    }
}