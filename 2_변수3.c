// 2_변수3.c
#include <stdio.h>

// - 변수의 크기 => 변수의 타입에 의해서 결정됩니다.
// - 변수의 수명 => 변수의 종류
// 1) 전역 변수
//  : 프로그램이 시작할 때, 초기화되고
//    프로그램이 종료될 때까지 유지됩니다.
//    초기화하지 않을 경우, 자동으로 0으로 초기화됩니다.
//  => 데이터 영역

// 2) 지역 변수
//  : 함수 안에서 초기화되고, 함수가 종료할 때 파괴됩니다.
//    초기화하지 않을 경우, 쓰레기값을 가집니다.
//  => 스택 영역
//  => 메모리 할당과 해지의 비용이 없습니다.

// 3) 정적 지역 변수
//  :  함수가 최초에 실행되는 시점에 초기화되고,
//    프로그램이 종료될 때까지 유지됩니다.
//  => 데이터 영역에 저장됩니다.

// 4) 동적 메모리 할당
//  : 개발자가 원하는 시점에 생성하고, 개발자가 원하는 시점에
//    파괴할 수 있습니다.
//  문제점
//  - 누수의 위험성이 있습니다.
//  - 할당과 해지의 비용이 큽니다.

#if 0
int global; // 전역 변수



int main(void)
{
    // int local = 42; // 지역 변수
    int local; /* 초기값을 알 수 없습니다. 쓰레기값 */

    printf("global: %d\n", global);
    printf("local: %d\n", local);
    // 초기화되지 않은 메모리를 읽는 행위는 미정의 동작입니다.

    return 0;
}
#endif

void foo(void)
{
    static int count = 0;
    // 정적 지역 변수
    // => 함수가 최초에 실행되는 시점에 초기화되고,
    //    프로그램이 종료될 때까지 유지됩니다.
    // => 데이터 영역에 저장됩니다.
    // => 지역 변수 앞에 static을 붙이면,
    //    스택 영역이 아닌 데이터 영역으로 변경하는 키워드입니다.
    //    (기억 부류 지정자)

    printf("%d\n", ++count);
}

int main(void)
{
    foo();
    foo();
    foo();
    return 0;
}
