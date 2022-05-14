#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, p, cout = 0;
        scanf("%d%d", &n, &p);
        for (int i = 1; i <= n; i++)
        {
            int a = i;
            while (a % p == 0)
            {
                cout++;
                a /= p;
            }
        }
        printf("%d\n", cout);
    }
    return 0;
}