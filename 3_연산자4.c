// 3_연산자4.c
#include <stdio.h>

// &, |, ^, ~
// <<, >>  Bit Shift Operator
#if 0
int main(void)
{
    unsigned int n = 1;
    printf("%d\n", n << 1);
    // 0000 0010

    printf("%d\n", n << 2);
    // 0000 0100

    n = -32;
    //  1111 1111 1110 0000 : -32
    //  1111 1111 1111 0000 : -16

    // >>
    // - 산술 쉬프트(Arithmetic Shift)
    //  : 피 연산자의 타입이 signed 일때
    // 쉬프트의 결과로 채워지는 비트가 부호 비트로 채워집니다.

    printf("%d\n", n >> 1);
    // 0001 0000

    // - 논리 쉬프트(Logical Shift)
    //  : 피 연산자의 타입이 unsigned 일때

    return 0;
}
#endif
