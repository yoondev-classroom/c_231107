// 3_연산자.c
#include <stdio.h>

// ++, --
#if 0
int main(void)
{
    int x = 0;
    // x의 값이 증가하지만,
    // ++x는 증가된 값으로 평가되고,
    // x++은 증가되기 이전의 값으로 평가됩니다.

    // printf("%d\n", ++x);
    printf("%d\n", x++);

    return 0;
}
#endif

#if 0
int main(void)
{
    int a = 0;
    int result = ++a + ++a; /* 미정의 동작 */
    printf("result: %d\n", result);

    return 0;
}
#endif

#if 0
int main(void)
{
    int a = 0;

    ++a;
    ++a;
    int result = a + a; /* 미정의 동작 */
    printf("result: %d\n", result);

    return 0;
}
#endif

int main(void)
{

    int x = 0;
    x += 1;
    // 복합 대입 연산자
    // x = x + 1; // x += 1;
}
