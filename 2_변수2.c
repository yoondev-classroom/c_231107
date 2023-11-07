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

int main(void)
{
    int n = 40000;

    short s = n; /* Overflow, 미정의 동작 */
    printf("%d\n", s);

    return 0;
}
