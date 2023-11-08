// 7_함수.c
#include <stdio.h>

// 함수: 입력을 받아서 주어진 연산을 수행하고, 결과를 반환하는 코드의 집합입니다.

// 반환타입 함수이름(입력 파라미터 ...)
#if 0
void print_integer(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    int x = 42;

    print_integer(x);
    print_integer(x);
    print_integer(x);
    print_integer(x);

    return 0;
}
#endif

#if 0
int main(void)
{
    int x = 42;

    printf("%d\n", x);
    printf("%d\n", x);
    printf("%d\n", x);
    printf("%d\n", x);
    printf("%d\n", x);

    return 0;
}
#endif

// 함수의 반환 타입이 void가 아닌 경우, 함수는 반드시
// 결과를 return 해야 합니다.
#if 0
int add(int a, int b)
{
    if (a < 0) {
        return 0;
    }

    if (b < 0) {
        return 0;
    }

    return a + b;
}

int main(void)
{
    printf("%d\n", add(10, 20));

    return 0;
}
#endif

// C 에서는 컴파일러가 함수의 return이 작성되지 않을 경우,
// 컴파일 오류가 발생하지 않습니다.
// => 반환값이 존재하는 함수를 작성할 때, 함수 안에서 return은 한번 작성되어야 합니다.

int add2(int a, int b)
{
    int result = 0;

    if (a >= 0 && b >= 0) {
        result = a + b;
    }

    return result;
}

int add(int a, int b)
{
    int result;

    if (a < 0) {
        result = 0;
    } else if (b < 0) {
        result = 0;
    } else {
        result = a + b;
    }

    return result;
}

int main(void)
{
    printf("%d\n", add(10, 20));

    return 0;
}
