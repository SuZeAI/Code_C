#include <stdio.h>
int main()
{
    int n, k, p = 2, cout = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        while (a % p == 0)
        {
            cout++;
            a /= p;
        }
    }
    if (cout >= k)
        printf("Yes");
    else
        printf("No");

    return 0;
}