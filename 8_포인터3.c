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

// 엔디안: CPU가 메모리를 저장하고, 해석하는 방식입니다.
//   - CPU마다 엔디안이 다르기 때문에,
//     통신이 필요할 때, 엔디안을 통일해서 정렬해야 합니다.
//     : 빅 엔디안(네트워크 엔디안)

// 0   1   2   3
// [12][34][56][78]
// [78][56][34][12]
#if 1
int main(void)
{
    int n = 0x12345678;

    char* pc = (char*)&n;
    // printf("%x\n", *pc);
    //                *(pc + 0)
    printf("%x\n", pc[0]);
    printf("%x\n", pc[1]);
    printf("%x\n", pc[2]);
    printf("%x\n", pc[3]);

    return 0;
}
#endif

#if 1
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
#endif

// https://cnst.livejournal.com/24040.html
