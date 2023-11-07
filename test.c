#include <stdio.h>
// test.c
int n = 100;
// external linkage(외부 연결)
// => 전역 변수 또는 전역 함수는 다른 파일에서 접근이 가능합니다.

void foo(void)
{
    printf("foo\n");
}
