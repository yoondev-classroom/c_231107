// 1_시작.c
// https://github.com/yoondev-classroom/c_231107

// 1. 빌드 단계
// - 전처리
// => 텍스트 작업 수행

// - 컴파일
// => 소스 코드를 기계어 코드로 변경합니다.
// a.c -> a.obj
// b.c -> b.obj
// c.c -> c.obj

// - 링크
// => 오브젝트 파일을 연결해서, 실행 파일을 만듭니다.
// a.obj + b.obj + c.obj => a.exe

// 실행 파일: 실행 가능한 파일
// => 프로그램

// 2. 컴파일러
// - Microsoft Visual C/C++ Compiler
//  => MSVC
// - GNU C/C++ Compiler
//  => GCC
// - LLVM Compiler
//  => Clang

// 3. C 표준
// - c99
// - c11, c14, c17, c23

#include <stdio.h>
#include <stdlib.h>

// 4. 프로그램이 시작하였을 때,
//    가장 먼저 수행되는 함수입니다.
//  => Entry Point(진입점)

void foo(void) { } // 1
void goo() { } // 2

int main(void)
{
    // foo(42);
    goo(42);

    printf("Hello, C\n");

    return 0;
    // 성공을 의미합니다.

    // return EXIT_SUCCESS;
}
