// 6_배열2.c
#include <stdio.h>

// - 배열의 길이는 반드시 컴파일 시간에 결정되어야 합니다.
// - GCC/Clang 컴파일러는 VLA를 지원합니다.
// => 사용하지 않는 것이 좋습니다.
#if 0
int main(void)
{
    // int x[32];

    int len;
    scanf("%d", &len);

    int x[len]; /* 컴파일 오류! */

    return 0;
}
#endif

// godbolt.org

// 1) const
// => 상수 표현식이 아닙니다.
//  : 컴파일러가 컴파일 시간에 미리 계산할 수 있는 식을 의미합니다.
// => C언어에서는 한계가 있습니다.

// 2) 전처리기 - 매크로 상수
#define NAME_LEN 32

// 3) enum(열거체)
enum {
    NAME_LEN2 = 32
};

int main(void)
{

    printf("n: %d\n", NAME_LEN);

    int x = 10 + 5;

    int n = 42;
    printf("n: %d\n", n);

    return 0;
}
