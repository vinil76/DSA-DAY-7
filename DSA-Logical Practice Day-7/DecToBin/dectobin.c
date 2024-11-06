#include <stdio.h>
int main()
{
    int DecNum;
    int rem;
    int ans = 0;
    int pow = 1;
    int temp;
    temp = DecNum;
    printf("Enter a decimal number: ");
    scanf("%d", &DecNum);
    temp = DecNum;
    while (DecNum > 0)
    {
        rem = DecNum % 2;
        DecNum = DecNum / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    DecNum = temp;
    printf("Binary equivalent of %d is %d", DecNum, ans);
    return 0;
}