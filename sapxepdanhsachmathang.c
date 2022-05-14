#include <stdio.h>
typedef struct GIACA
{
    char name[100];
    char group[100];
    float import;
    float export;
    int num;
} GC;
void input(GC shop[], int n)
{
    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(shop[i].name);
        gets(shop[i].group);
        scanf("%f", &shop[i].import);
        scanf("%f", &shop[i].export);
        shop[i].num = i + 1;
    }
}
void arrange(GC shop[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (shop[i].export - shop[i].import < shop[j].export - shop[j].import)
            {
                GC m = shop[i];
                shop[i] = shop[j];
                shop[j] = m;
            }
    }
}
void output(GC shop[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %s %.2f\n", shop[i].num, shop[i].name, shop[i].group, shop[i].export - shop[i].import);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    GC shop[100];
    input(shop, n);
    arrange(shop, n);
    output(shop, n);
}