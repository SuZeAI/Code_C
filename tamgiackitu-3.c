#include <stdio.h>
int tong(int j, int n)
{
    int sum = 0;
    while (j--)
    {
        sum += n;
        n--;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num = n - 1;
        int j = i + 1;
        while (j <= i + 1 + tong(i, n - 1) && num >= 0)
        {
            printf("%c ", 'A' + j - 1);
            j += num;
            num--;
        }
        printf("\n");
    }
}