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

int main(void)
{
    printf("Hello, C\n");
    return 0;
}
