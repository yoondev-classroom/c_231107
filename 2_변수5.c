// 2_변수5.c
#include <stdio.h>

// 1. 초기화와 대입의 차이점을 이해해야 합니다.
// - 초기화: 변수를 생성하면서(메모리를 할당하면서), 값을 지정합니다.
// -  대입: 이미 할당된 메모리(만들어진 변수의) 값을 변경합니다.
#if 0
int main(void)
{
    int n1 = 42; // 초기화

    int n2;
    n2 = 42; // 대입

    printf("%d %d\n", n1, n2);

    return 0;
}
#endif

int main(void)
{
    const int n = 42;
    // n은 실행 중에 값을 변경할 수 없습니다.

    // n = 100; /* 컴파일 오류 */
    // const int n; /* 이상한 코드 */

    return 0;
}
