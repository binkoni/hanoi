#include <stdio.h>
#include <stdbool.h>

void hanoi(int n, int a, int b, int c, int* count)
{
    if(n > 0)
    {
        hanoi(n - 1, a, c, b, count);
        printf("%d -> %d\n", a, c);
        ++(*count);
        hanoi(n - 1, b, a, c, count);
    }
}

int main()
{
    int n;
    while(true)
    {
        scanf("%d", &n);
        int count = 0;
        hanoi(n, 1, 2, 3, &count);
        printf("count: %d\n", count);
        printf("\n");
    }
    return 0;
}
