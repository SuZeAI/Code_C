#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void test(char s[])
{
    bool check[10] = {false};
    int len = strlen(s);
    if (s[0] - 48 == 0)
    {
        printf("INVALID\n");
        return;
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] < 48 || s[i] > 57)
        {
            printf("INVALID\n");
            return;
        }
        check[s[i] - 48] = true;
    }
    for (int i = 0; i < 10; i++)
        if (check[i] == false)
        {
            printf("NO\n");
            return;
        }
    printf("YES\n");
    return;
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[1000];
        gets(s);
        test(s);
    }
    return 0;
}