#include <stdio.h>
int check(int n, int a[])
{
    int numl = 0, numc = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            numc++;
        else
            numl++;
    }
    if (n % 2 == 0 && numc > numl)
        return 1;
    if (n % 2 != 0 && numc < numl)
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n = 0, a[200], xet;
        char kitu = ' ';
        while (kitu != '\n')
        {
            scanf("%d", &a[n]);
            n++;
            kitu = getc(stdin);
        }
        xet = check(n, a);
        if (xet == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}