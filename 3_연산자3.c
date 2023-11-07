// 3_연산자3.c
#include <stdio.h>
#include <stdlib.h>

#if 0
int is_odd(int n)
{
    // return n % 2 == 1;
    // return n % 2 == 1 || n % 2 == -1;
    return abs(n % 2) == 1;

    // %(나머지), /(몫)
    // 연산의 결과는 나누는 수의 부호를 따릅니다.
}

int main(void)
{
    printf("%d\n", is_odd(-1));
    printf("%d\n", is_odd(-3));
    printf("%d\n", is_odd(-5));
    printf("%d\n", is_odd(-33));

    return 0;
}

#endif

// 0000 0001
// 0000 0010
// 0000 0011
// 0000 0100
// 0000 0101

// 42
// 32 + 8 + 2

// 0010 1011
// 0000 0001 &
//-------------
// 0000 0001

// - 비트 연산자는 우선순위가 낮기 때문에,
//   괄호를 신경써주어야 합니다.
int is_even(int n)
{
    return (n & 1) == 0;
    // return n & (1 == 0);
}

int is_odd(int n)
{
    return (n & 1) == 1;
}

int main(void)
{
    printf("%d\n", is_odd(-1));
    printf("%d\n", is_odd(-2));
    printf("%d\n", is_even(-1));
    printf("%d\n", is_even(-2));

    return 0;
}
