#include <stdio.h>
int main()
{
    int n;
    int lastdigit, rev = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int temp = n;
    if (n < 0)
    {
        printf("Enter the Positive number");
    }
    else
    {
        while (n != 0)
        {
            lastdigit = n % 10;
            rev = rev * 10 + lastdigit;
            n = n / 10;
        }
        n = temp;
        printf("Reverse of a number of %d is %d", n, rev);
    }
    return 0;
}