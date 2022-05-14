#include <stdio.h>
int main()
{
    long int x, y;
    while (scanf("%ld%ld", &x, &y) != -1)
    {
        long int hieu;
        if (x > y)
            hieu = x - y;
        else
            hieu = y - x;
        long int i = 1, num = 0;
        while (hieu > 0)
        {
            long int a = hieu / i;
            i++;
            if (a >= 2)
            {
                num += 2;
                hieu -= (i - 1) * 2;
            }
            else
            {
                num++;
                hieu -= i - 1;
            }
        }
        printf("%ld\n", num);
    }
}