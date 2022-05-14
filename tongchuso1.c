#include <stdio.h>
int main()
{
    int n, sum = 0, a;
    scanf("%d", &n);
    for (int i = n; i > 0;)
    {
        a = i % 10;
        sum += a;
        i /= 10;
    }
    printf("%d", sum);
}