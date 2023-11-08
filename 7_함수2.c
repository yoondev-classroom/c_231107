// 7_함수2.c
#include <stdio.h>

#include "add.h"

// 함수 프로토타입 선언
// int add(int, int);
// int add(int lhs, int rhs);
// int sub(int lhs, int sub);
#include "calc.h"

// 헤더 파일을 만들 때, 중복 포함의 문제를 해결해야 합니다.
// 1) 컴파일러 지시어
// => 사용하지 않는 것이 좋습니다.
//    지원하지 않는 컴파일러에서 동작하지 않습니다.
// 2) 전처리기
// => include guard
//  #ifndef ADD_H
//  #define ADD_H

//  ....

//  #endif

#if 0
int main(void)
{
    int result;

    // result = add(10, 20);
    // printf("result: %d\n", result);

    return 0;
}
#endif

#if 0
// #define OK

int main(void)
{
#ifndef OK
    printf("Hello, C\n");
#endif

    return 0;
}
#endif

int main(void)
{
    return 0;
}
