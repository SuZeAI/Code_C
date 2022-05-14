#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct word
{
    char s[100];
    int fre;
} w;
int symmetry(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            return 0;
    }
    return 1;
}
int find(int n, w s[], char str[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(str, s[i].s) == 0)
            return i;
    }
    return -1;
}
int main()
{
    w s[1001];
    char word[100];
    int i = 0;
    while (scanf("%s", &word) != -1)
    {
        if (symmetry(word) == 1)
        {
            int i_arr = find(i, s, word);
            if (i_arr == -1)
            {
                strcpy(s[i].s, word);
                s[i].fre = 1;
                i++;
            }
            else
            {
                s[i_arr].fre++;
            }
        }
    }
    int max_len = 0;
    for (int j = 0; j < i; j++)
    {
        if (max_len < strlen(s[j].s))
            max_len = strlen(s[j].s);
    }
    for (int j = 0; j < i; j++)
    {
        if (strlen(s[j].s) == max_len)
            printf("%s %d\n", s[j].s, s[j].fre);
    }
}