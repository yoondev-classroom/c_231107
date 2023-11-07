// 2_변수4.c
#include <stdio.h>

// 선언
// - 컴파일러에게 알려줌
extern int n;
// 전역 변수를 선언할 때는,
// extern을 명시하는 것이 좋습니다.
extern void foo(void);
// => 위의 선언들이 헤더를 통해
//    제공됩니다.

extern int password;

int main(void)
{
    printf("%d\n", password);

    printf("n: %d\n", n);

    foo();

    return 0;
}
