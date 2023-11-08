// 8_포인터5.c
#include <stdio.h>

// int x[3][2]
//   : x[3]
//  - x는 3개의 요소를 가지는 배열입니다. 배열의 요소 타입은?

//   : x[3][2]
//  - 배열의 요소 타입은 2개짜리 배열입니다. 배열의 요소 타입은?

//   : int x[3][2]
//  - 배열의 요소 타입은 int 입니다.
// [ int[2] ][ int[2] ][ int[2] ]

#if 0
int main(void)
{
    int x[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
    // x는 몇개의 요소를 가지는 배열인가요?
    //  : 3

    printf("%zu\n", sizeof(x) / sizeof(x[0]));

    return 0;
}
#endif

#if 0
typedef int(ARR2)[2];

int main(void)
{
    int* p1 = 0;
    printf("%d\n", p1 + 1); // 4

    // int(*p2)[2] = 0;
    ARR2* p2;
    printf("%d\n", p2 + 1); // ???

    double(*p3)[3] = 0;
    printf("%d\n", p3 + 1);

    return 0;
}
#endif

int main(void)
{

    int n;
    int* p1 = &n;
    //  p1: int*
    // *p1: int

    int x[3][2] = {
        //  p
        { 1, 2 },
        //  p+1
        { 3, 4 },
        //  p+2
        { 5, 6 },
    };

    int(*p)[2] = x;

    printf("%d\n", **p); // p[0][0]
    printf("%d\n", *(*p + 1)); // p[0][1]
    printf("%d\n", **(p + 2)); // p[2][0]

    return 0;
}
