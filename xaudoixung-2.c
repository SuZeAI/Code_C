#include <stdio.h>
#include <string.h>
int main()
{
    char A[100005];
    fgets(A, 100005, stdin);
    int len = strlen(A);
    printf("%d", len - 2);
}