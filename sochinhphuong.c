#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, b, c;
        scanf("%d", &n);
        b = sqrt(n);
        c = b * b;
        if (n == c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}