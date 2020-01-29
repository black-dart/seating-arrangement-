#include <stdio.h>

int main()
{
    int n;

    scanf("%d\n", &n);

    n = n + 2 * (6 - (n - 1) % 12) - 1;
    //determining facing seat
    printf("%d ", n);
    // determining seat type
    if (n % 6 < 2)
        printf("WS\n"); //window seat
    else if (n % 6 == 2 || n % 6 == 5)
        printf("MS\n"); //mid seat
    else
        printf("AS\n"); //aisel seat

    return 0;
}