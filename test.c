#include <stdio.h>
// test.c
int n = 100;
// external linkage(외부 연결)
// => 전역 변수 또는 전역 함수는 다른 파일에서 접근이 가능합니다.

void foo(void)
{
    printf("foo\n");
}

// 전역 변수 / 함수를 내부 연결(Internal linkage)로 변경할 수 있습니다.
// => static
// => 통용 범위 지정자

static int password = 1234;
// 다른 파일에서 접근할 수 없는 전역 변수

static void goo(void)
{
}
// 다른 파일에서 호출할 수 없는 전역 함수
