#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void lowercase(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
}
void detach(char s[], char *c[])
{
    int i = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        c[i] = token;
        i++;
        token = strtok(NULL, " ");
    }
}
int main()
{
    int t, c = 1;
    scanf("%d", &t);
    getchar();
    fflush(stdin);
    while (t--)
    {
        char s1[100], s2[100], s3[100];
        gets(s1);
        gets(s2);
        strcpy(s3, s1);
        lowercase(s1), lowercase(s2);
        char b[100][100], *d[100];
        int i = 0;
        char *token = strtok(s1, " ");
        while (token != NULL)
        {
            strcpy(b[i], token);
            i++;
            token = strtok(NULL, " ");
        }
        detach(s3, d);
        bool check[200] = {false};
        for (int j = 0; j < i; j++)
            if (strcmp(s2, b[j]) == 0)
                check[j] = true;
        printf("Test %d: ", c);
        for (int k = 0; k < i; k++)
            if (check[k] == false)
                printf("%s ", d[k]);
        printf("\n");
        c++;
    }
    return 0;
}