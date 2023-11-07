// 2_변수.c
// - 실행시간에 변하는 값

// Built-in type(내장 타입)
// 1) char는 문자 타입이고, signed char/ unsigned char는 1바이트 정수 타입입니다.
// 2) char는 1바이트 입니다.
// 3) 정수 타입의 크기는 플랫폼마다 달라질 수 있습니다.
// 4) 정수 타입을 바로 사용하는 것은 위험합니다.
//   => typedef를 통해 정의되어 있는 타입을 사용하는 것이 좋습니다.
//   => c99, stdint.h

// * 문자 타입
// - char

// * 정수 타입
// - signed char / unsigned char
// - short / unsigned short
// - int / unsigned int
// - long / unsigned long
// - long long / unsigned long long

#if 0
#include <stdint.h>

int main(void)
{
    int8_t a;
    int16_t b;
    uint32_t c;
    uint64_t d;

    

    return 0;
}
#endif

#include <stdio.h>
// * 실수 타입
// => 플랫폼과 컴파일러에 따라 달라질 수 있습니다.
// typedef float float32_t;
// typedef double float64_t;

// - float
// - double
// - long double

#if 0
int main(void)
{
    // sizeof -> size_t: %zu

    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    return 0;
}
#endif

// - 실수 타입은 오차가 존재합니다.
// - 실수 타입은 동등성 비교를 수행할때 주의가 필요합니다.

#include <math.h>

int main(void)
{
    double a = 0.7;
    double b = 0.1 * 7;

    // if (a == b) {

    // a-b
    if (fabs(a - b) < 0.0000000001) {
        printf("같다\n");
    } else {
        printf("다르다\n");
    }

    return 0;
}
