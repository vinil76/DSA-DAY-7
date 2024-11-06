#include <stdio.h>
int rem = 0;
int ans = 0;
int pow1 = 1;
void DectoBin(int n)
{
    int temp = n;
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        ans = ans + (rem * pow1);
        pow1 = pow1 * 10;
    }
    n = temp;
    printf("Binary equivalent of %d is %d", n, ans);
}
int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    DectoBin(num);
    return 0;
}