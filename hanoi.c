#include <stdio.h>
#include <stdbool.h>

void hanoi(int n, int a, int b, int c)
{
    if(n > 0)
    {
        hanoi(n - 1, a, c, b);
        printf("%d -> %d\n", a, c);
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    while(true)
    {
        scanf("%d", &n);
        hanoi(n, 1, 2, 3);
        printf("\n");
    }
    return 0;
}
