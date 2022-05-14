#include <stdio.h>
int max(int x1, int x2, int x3, int x4)
{
    int max = x1;
    if (max < x2)
        max = x2;
    if (max < x3)
        max = x3;
    if (max < x4)
        max = x4;
    return max;
}
int min(int x1, int x2, int x3, int x4)
{
    int min = x1;
    if (min > x2)
        min = x2;
    if (min > x3)
        min = x3;
    if (min > x4)
        min = x4;
    return min;
}
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    int maxX = max(x1, x2, x3, x4), maxY = max(y1, y2, y3, y4);
    int minX = min(x1, x2, x3, x4), minY = min(y1, y2, y3, y4);
    int max_minX = maxX - minX, max_minY = maxY - minY;
    if (max_minX > max_minY)
        printf("%d", max_minX * max_minX);
    else
        printf("%d", max_minY * max_minY);
}