// 2_변수2.c
#include <stdio.h>

// - 정수의 크기(타입)에 따라서 표현범위가 결정됩니다.
// 64비트 기준
// - signed char(1바이트)
//  : -128 ~ 127 / 0 ~ 255

// - short(2바이트)
//  : -32768 ~ 32767 / 0 ~ 65535

// - int(4바이트)
//  : -21억 ~ 21억 / 0 ~ 42억

// - long long(8바이트)

#if 0
int main(void)
{
    int n = 40000;

    short s = n; /* Overflow, 미정의 동작 */
    printf("%d\n", s);

    return 0;
}
#endif

// - 부호 있는 정수 타입은 최상위 비트를 부호 비트로 이용합니다.
#if 0
int main(void)
{
    int n1 = 456;
    // 2^8 + 2^7 + 2^6 + 2^3
    // 0000 0000 0000 0000 0000 0001 1100 1000

    int n2 = 323;
    // 2^8 + 2^6 + 2^1 + 2^0
    // 0000 0000 0000 0000 0000 0001 0100 0011

    // 2의 보수법
    // -456
    // 0000 0000 0000 0000 0000 0001 1100 1000
    // 1111 1111 1111 1111 1111 1110 0011 0111 + 1
    // => 1111 1111 1111 1111 1111 1110 0011 1000

    // -323
    // 0000 0000 0000 0000 0000 0001 0100 0011
    // 1111 1111 1111 1111 1111 1110 1011 1100 + 1
    // => 1111 1111 1111 1111 1111 1110 1011 1101

    return 0;
}
#endif

int main(void)
{
    signed char a = 0x80;
    // 1000 0000
    // => signed 타입이 더 큰 표현범위의 타입으로 변환될 때,
    //    부호비트로 확장합니다.

    int n = a;
    printf("%d\n", n);

    return 0;
}
