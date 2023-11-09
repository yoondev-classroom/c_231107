// 8_포인터7.c
#include <stdio.h>

// void*
// : 가르키는 대상체의 타입 정보가 존재하지 않습니다.

#if 0
int main(void)
{
    int n;
    int* p1 = &n;

    char ch;
    p1 = &ch;
    // 포인터 타입간의 암묵적인 변환은 허용되지 않습니다.

    return 0;
}
#endif

// 1. void* 모든 주소를 담을 수 있습니다.
// 2. 대상체의 타입 정보가 존재하기 때문에,
//    포인터 연산을 수행할 수 없습니다.

// 3. void*는 구체적인 포인터 타입으로의 암묵적인 변환이 허용됩니다.
//   => void*의 주소를 연산하기 위해서는 구체적인 포인터 타입으로
//      담아서 사용해야 합니다.
#if 0
int main(void)
{
    int a = 10;
    char ch = 'A';
    double d;

    void* p = NULL;

    p = &a;
    printf("%d\n", *(int*)p);

    // int* pa = p;
    // printf("%d\n", *pa);

    p = &ch;
    printf("%c\n", *(char*)p);

    p = &d;

    return 0;
}
#endif

int main(void)
{
    void* p = NULL;
    printf("%p\n", p + 1); /* 표준이 아닙니다. */

    return 0;
}
