#include <stdio.h>
int main()
{
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        if (i % 2 == 0)
        {
            for (int j = num; j <= num + i; j++)
                printf("%c ", j + 'a' - 1), c++;
            num += c;
        }
        if (i % 2 != 0)
        {
            for (int j = num + i; j >= num; j--)
                printf("%c ", j + 'a' - 1), c++;
            num += c;
        }
        printf("\n");
    }
}