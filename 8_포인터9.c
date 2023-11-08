// 8_포인터9.c
#include <stdio.h>

int add(int a, int b) { return a + b; }
// int(int a, int b)

int sub(int a, int b) { return a - b; }
// int(int a, int b)

// 1. 함수의 타입은 함수의 인자 정보와 반환 타입에
//    의해서 결정됩니다.
//    "함수의 시그니처"

// 2. 시그니처가 동일한 함수는 같은 타입입니다.

// 3. 함수도 주소가 있습니다.
int main(void)
{
    printf("%p\n", &add);
    printf("%p\n", &sub);

    int (*fp)(int a, int b) = NULL;

    int result;

    // fp = &add;
    // fp = &sub;
    // result = (*fp)(10, 20);

    fp = add;
    result = fp(10, 20);

    printf("result: %d\n", result);

    return 0;
}
