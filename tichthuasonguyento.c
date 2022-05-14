#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, num = 1;
        scanf("%d", &n);
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                n /= i;
                if (n % i != 0)
                    num *= i;
            }
        }
        printf("%d\n", num);
    }
}