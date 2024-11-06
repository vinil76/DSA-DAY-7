#include <stdio.h>
int main()
{
    int a = 4;
    int b = 8;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    printf("The AND Operator of A & B is : %d \n", c);
    printf("The OR Operator of A | B is : %d \n", d);
    printf("The XOR Operator of A ^ B is : %d \n", e);
    printf("The LEFTSWIFT Operator of A << B is : %d \n", a << 2);
    printf("The RIGHTSWIFT Operator of A >> B is : %d \n", a >> 1);
    return 0;
}