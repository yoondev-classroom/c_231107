// 3_연산자2.c
#include <stdio.h>

// 1. 연산자는 우선순위가 있습니다.
// 2. 논리 표현식
//   => 결과가 참(1)/거짓(0) 입니다.

#if 0
int main(void)
{
    int n = 42;

    printf("%d\n", n == 42); // ==
    printf("%d\n", n > 42); // >=

    return 0;
}
#endif

// 3. && : 논리 AND 연산자
// (논리식1) && (논리식2)
//  => 논리식 1과 논리식 2의 결과가 참이어야 참입니다.

//    || : 논리 OR 연산자
// (논리식1) || (논리식2)
//  => 둘 중에 하나라도 참 이면 참 입니다.

// 단일 회로 성질
#if 0
int main(void)
{
    // * 논리식의 결과
    // 참  -> 1
    // 거짓 -> 0

    // * 논리식의 판단
    // 0이 아닌 값 -> 참
    // 0         -> 거짓

    int n = 42;
    // if (n != 0) {
    if (n) {
    }

    return 0;
}
#endif

#if 0
int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    // 1 0 0
    // c = a++ && ++b;

    // 1 0 1
    c = ++a || b++;
    printf("%d %d %d\n", a, b, c);

    return 0;
}
#endif

// - &&가 ||보다 우선순위가 높습니다.
// - 연산자 우선순위는 연산을 먼저 수행하는 개념이 아니라
//   결합을 결정합니다.
//  a + (b * c);

#if 1
int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    // 1 1 1 0
    // 1 0 1 1
    // 0 1 1 1
    // 1 1 1 1
    // 1 0 0 0
    // 1 0 0 1

    // 핵심: &&, ||를 함께 사용할 경우,
    //      반드시 괄호를 사용해야 합니다.

    // d = ++a || (++b && c++);
    // d = ++a || ++b && c++;

    d = ++a && ++b || c++;
    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}
#endif

#if 0
int main(void)
{
    int a, b, c;

    a = b = c = 100;
    //     ---------
    // a = b = 100;
    // a = 100;
    // 100;


    printf("%d %d %d\n", a, b, c);

    return 0;
}
#endif
