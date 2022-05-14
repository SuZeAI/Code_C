#include <stdio.h>
#include <math.h>
typedef struct coordinate
{
    float x, y;
} cd;
void input(cd coor[])
{
    for (int i = 0; i < 3; i++)
        scanf("%f%f", &coor[i].x, &coor[i].y);
}
float triangle(cd coor[])
{
    float a = coor[0].x - coor[1].x;
    float b = coor[0].y - coor[1].y;
    float c = (float)sqrt(pow(a, 2) + pow(b, 2));
    float a1 = coor[1].x - coor[2].x;
    float b1 = coor[1].y - coor[2].y;
    float c1 = (float)sqrt(pow(a1, 2) + pow(b1, 2));
    float a2 = coor[0].x - coor[2].x;
    float b2 = coor[0].y - coor[2].y;
    float c2 = (float)sqrt(pow(a2, 2) + pow(b2, 2));
    if (c + c1 > c2 && c1 + c2 > c && c + c2 > c1)
        return c + c1 + c2;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        cd coor[3];
        input(coor);
        float num = triangle(coor);
        if (num)
            printf("%.3f\n", num);
        else
            printf("INVALID\n");
    }
}