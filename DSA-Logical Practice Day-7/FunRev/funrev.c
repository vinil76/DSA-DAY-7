#include <stdio.h>

int RevNum(int n)
{
    int lastdigit = 0;
    int rev = 0;
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
        return rev;
    }
}

int main()
{
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int revNum = RevNum(num);

    printf("Reverse of a number of %d is %d", num, revNum);

    return 0;
}