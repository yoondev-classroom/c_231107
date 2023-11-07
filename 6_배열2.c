// 6_배열2.c
#include <stdio.h>

// - 배열의 길이는 반드시 컴파일 시간에 결정되어야 합니다.
// - GCC/Clang 컴파일러는 VLA를 지원합니다.
// => 사용하지 않는 것이 좋습니다.

int main(void)
{
    // int x[32];

    int len;
    scanf("%d", &len);

    int x[len]; /* 컴파일 오류! */

    return 0;
}
