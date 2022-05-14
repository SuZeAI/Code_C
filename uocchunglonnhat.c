#include <stdio.h>
int SNT(int a, int b)
{
    for (int i = (a + b) / 2;; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", SNT(a, b));
    }
}