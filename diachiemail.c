#include <stdio.h>
#include <string.h>
void lowercase(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
}
int main()
{
    char name[100];
    char *b[100];
    int i = 0;
    fflush(stdin);
    gets(name);
    lowercase(name);
    char *token = strtok(name, " ");
    while (token != NULL)
    {
        b[i] = token;
        i++;
        token = strtok(NULL, " ");
    }
    for (int j = 0; j < i - 1; j++)
        printf("%c", b[j][0]);
    printf("%s@ptit.edu.vn", b[i - 1]);
}