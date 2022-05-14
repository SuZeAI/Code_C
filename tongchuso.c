#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, sum = 0, a;
        scanf("%d", &n);
        for (int i = n; i > 0;)
        {
            a = i % 10;
            sum += a;
            i /= 10;
        }
        printf("%d\n", sum);
    }
}