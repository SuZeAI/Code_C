#include <stdio.h>
#include <string.h>
typedef struct sinhvien
{
    char name[100];
    float a, b, c;
    int map;
} SV;
void input(int k, int n, SV sv[])
{

    for (int i = k; i < k + n; i++)
    {
        scanf("\n");
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
void sort(int n, SV sv[])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (sv[i].a + sv[i].b + sv[i].c > sv[j].a + sv[j].b + sv[j].c)
            {
                SV a = sv[i];
                sv[i] = sv[j];
                sv[j] = a;
            }
}
void output(int n, SV sv[])
{
    for (int i = 0; i < n; i++)
        printf("%d %s %.1f %.1f %.1f\n", sv[i].map, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
}
int main()
{
    int k = 0, index = 0;
    int fix[100000] = {};
    SV sv[100];
    while (1)
    {
        int n, a, b;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            scanf("%d", &a);
            input(k, a, sv);

            k += a;
            break;
        case 2:
            scanf("%d", &b);
            fix[index] = b;
            index++;
            repair(b - 1, sv);
            break;
        case 3:
            printf("%d\n", k);

            for (int i = 0; i < index; i++)
            {
                printf("%d\n", fix[i]);
            }

            sort(k, sv);
            output(k, sv);
            return 0;
        default:
            break;
        }
    }
}