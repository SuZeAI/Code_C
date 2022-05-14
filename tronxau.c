#include <stdio.h>
#include <string.h>
void mix(char s1[], char s2[], char s12[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        s12[j++] = s2[i];
        s12[j++] = s1[i];
    }
    s12[j] = '\0';
}
void detach(char s1[], char s2[], char s12[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
        s1[i] = s12[j++];
    for (int i = 0; i < n; i++)
        s2[i] = s12[j++];
}
int input(int n)
{
    char s1[n], s2[n], s12[2 * n + 10], temp[2 * n + 10];
    scanf("%s%s%s", &s1, &s2, &s12);
    char t1[n], t2[n];
    strcpy(t1, s1);
    strcpy(t2, s2);
    int count = 0;
    while (1)
    {
        count++;
        mix(s1, s2, temp, n);
        if (!strcmp(s12, temp))
            return count;
        detach(s1, s2, temp, n);
        if (!strcmp(s1, t1) && !strcmp(t2, s2))
            return -1;
    }
}
int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (!n)
            break;
        printf("%d\n", input(n));
    }
}