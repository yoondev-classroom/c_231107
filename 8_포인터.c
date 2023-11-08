// 8_포인터.c
#include <stdio.h>

// 1. 변수는 메모리에 저장됩니다.
//  => 메모리는 주소가 존재합니다.
//     & 연산자를 통해 변수의 주소를 얻을 수 있습니다.

// 2. 포인터 변수가 주소를 참조하는 변수의 메모리의
//    값을 읽거나 변경할 수 있습니다.

int main(void)
{
    int age = 42;
    printf("%p\n", &age);

    int* p;
    p = &age;

    printf("%d\n", age);
    printf("%d\n", *p);

    *p = 100;
    printf("%d\n", age);

    return 0;
}
