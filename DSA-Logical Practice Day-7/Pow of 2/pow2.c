#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int result = n * (1 << 2);
    if (n > 0 && (n & (n - 1)) == 0)
    {
        printf("%d is the power of 2 ", n);
    }
    else
    {
        printf("%d is not the power of 2 ", n);
    }
    return 0;
}