#include <stdio.h>
typedef struct sinhvien
{
    char name[100];
    float a, b, c;
    int map;
} SV;
void input(int n, SV sv[])
{

    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(sv[i].name);
        sv[i].map = i + 1;
        scanf("%f%f%f", &sv[i].a, &sv[i].b, &sv[i].c);
    }
}
void repair(int b, SV sv[])
{
    getchar();
    gets(sv[b].name);
    scanf("%f%f%f", &sv[b].a, &sv[b].b, &sv[b].c);
}
int up(int i, SV sv[])
{
    if (sv[i].a < sv[i].b && sv[i].b < sv[i].c)
        return 1;
    return 0;
}
void output(int n, SV sv[])
{
    for (int i = 0; i < n; i++)
        if (up(i, sv) == 1)
            printf("%d %s %.1f %.1f %.1f\n", sv[i].map, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
}
int main()
{
    int i = 3;
    SV sv[100];
    while (i)
    {
        int n, a, b;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            scanf("%d", &a);
            input(a, sv);
            printf("%d\n", a);
            break;
        case 2:
            scanf("%d", &b);
            repair(b - 1, sv);
            printf("%d\n", b);
            break;
        case 3:
            output(a, sv);
            return 0;
        default:
            break;
        }
    }
}