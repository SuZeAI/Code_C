#include <stdio.h>
#include <string.h>
int max1(char s[])
{
    int list[strlen(s)];
    for (int i = 0; i < strlen(s); i++)
    {
        list[i] = 1;
        for (int j = 0; j < i; j++)
            if (s[i] > s[j] && list[i] < list[j] + 1)
                list[i] = list[j] + 1;
    }
    int max = list[0];
    for (int i = 1; i < strlen(s); i++)
        if (max < list[i])
            max = list[i];
    return max;
}
int main()
{
    char s[55];
    scanf("%s", s);
    printf("%d", 26 - max1(s));
    return 0;
}