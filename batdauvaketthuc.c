#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d", &n);
        a = n % 10;
        for (int i = n; i > 0;)
        {
            b = i % 10;
            i /= 10;
            if (i == 0 && b == a)
                printf("YES\n");
            if (i == 0 && b != a)
                printf("NO\n");
        }
    }
}