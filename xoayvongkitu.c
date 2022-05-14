#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    char c = s[0];
    for (int i = 0; i < strlen(s) - 1; i++)
        s[i] = s[i + 1];
    s[strlen(s) - 1] = c;
}
int turn(char s[][55], int n)
{
    int list[55];
    for (int i = 0; i < n; i++)
    {
        list[i] = 0;
        for (int j = 0; j < n; j++)
            if (j != i)
            {
                char SS[55];
                strcpy(SS, s[j]);
                int num = 0;
                for (int h = 0; h < strlen(s[0]); h++)
                {
                    if (strcmp(SS, s[i]) == 0 && h == 0)
                        break;
                    else
                    {
                        reverse(SS);
                        if (strcmp(SS, s[i]) != 0)
                            num++, list[i]++;
                        else
                        {
                            list[i]++;
                            break;
                        }
                        if (num == strlen(s[0]) - 1)
                            return -1;
                    }
                }
            }
    }
    int min = list[0];
    for (int i = 0; i < n; i++)
        if (min > list[i])
            min = list[i];
    return min;
}
int main()
{
    int n;
    scanf("%d", &n);
    char s[55][55];
    for (int i = 0; i < n; i++)
        scanf("%s", &s[i]);
    printf("%d\n", turn(s, n));
    return 0;
}