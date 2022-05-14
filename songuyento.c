#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, b = 0;
        scanf("%d", &n);
        for (int i = 2; i < sqrt(n); i++)
            if (n % i == 0)
                b = 1;
        if (b == 1)
            printf("NO\n");
        if (b == 0)
            printf("YES\n");
    }
}