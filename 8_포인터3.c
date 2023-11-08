// 3_포인터3.c
#include <stdio.h>

// 1. 포인터의 타입은 포인터 연산의 단위를 결정합니다.
#if 0
int main(void)
{
    int n = 10;

    int* pn = &n;
    printf("%d\n", *pn);

    double d = 3.14;
    double* pd = &d;

    printf("%lf\n", *pd);

    char ch = 'A';
    char* pc = &ch;
    printf("%c\n", *pc);

    return 0;
}
#endif

// 0   1   2   3
// [12][34][56][78]
// [78][56][34][12]
#if 0
int main(void)
{
    int n = 0x12345678;

    char* pc = (char*)&n;
    printf("%x\n", *pc);

    return 0;
}
#endif

// 위험한 코드
// => 포인터를 통해 메모리를 해석할 때는
//    주의해야 합니다.
int main(void)
{
    int n = 42;

    // 문제점: 할당된 영역은 4바이트이지만,
    //  8바이트 단위의 연산을 수행하는 포인터를 통해 참조하였습니다.
    // => 미정의 동작
    long long* p = (long long*)&n;
    printf("%lld\n", *p);

    return 0;
}
