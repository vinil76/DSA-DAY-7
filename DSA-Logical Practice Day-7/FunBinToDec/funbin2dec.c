#include <stdio.h>

void BinToDec(int n)
{
    int rem = 0;
    int ans = 0;
    int pow1 = 1;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        ans = ans + (rem * pow1);
        n = n / 10;
        pow1 = pow1 * 2;
    }
    n = temp;
    printf("The Decimal Equivalent of %d is %d", n, ans);
}
int main()
{
    int Bin;
    printf("Enter the Binary Number : ");
    scanf("%d", &Bin);
    BinToDec(Bin);

    return 0;
}