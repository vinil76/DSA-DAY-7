#include <stdio.h>
int main()
{
    int Bin;
    int rem = 0;
    int ans = 0;
    int pow1 = 1;
    printf("Enter the Binary Number : ");
    scanf("%d", &Bin);
    int temp = Bin;
    while (Bin > 0)
    {
        rem = Bin % 10;
        ans = ans + (rem * pow1);
        Bin = Bin / 10;
        pow1 = pow1 * 2;
    }
    Bin = temp;
    printf("The Decimal Equivalent of %d is %d", Bin, ans);

    return 0;
}