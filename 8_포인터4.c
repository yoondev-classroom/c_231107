// 8_포인터4.c
#include <stdio.h>

#if 0
int main(void)
{
    //            p  p+1
    //            |   |
    int x[3] = { 10, 20, 30 };
    // x의 타입은? int[3]

    // Decay
    //  : 배열의 이름은 배열의 첫번째 원소의 주소로
    //    해석됩니다.
    // x -> &x[0]

    int* p = x;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);

    printf("%d\n", *(x + 0));
    printf("%d\n", *(x + 1));
    printf("%d\n", *(x + 2));

    printf("%d\n", x[0]);
    printf("%d\n", x[1]);
    printf("%d\n", x[2]);

    return 0;
}
#endif

// 포인터의 타입은 64비트에서 8바이트 입니다.
// 포인터의 타입은 32비트에서 4바이트 입니다.

// 주소의 단위는 바이트입니다.
// 2^10 => 1024 바이트    => 1키로바이트
// 2^10 * 2^10 => 1024KB => 1메가바이트
// 2^10 * 2^10 * 2^10 => 1024메가바이트 => 1기가바이트

// 32비트: 2^10 * 2^10 * 2^10 * 2^2
//  => 4기가바이트
#if 0
int main(void)
{
    int* p1;
    char* p2;
    double* p3;

    printf("%zu\n", sizeof(p1));
    printf("%zu\n", sizeof(p2));
    printf("%zu\n", sizeof(p3));

    return 0;
}
#endif

#if 0
int main(void)
{
    int* p = 0;
    printf("%d\n", p + 2); // 8

    char* p2 = 0;
    printf("%d\n", p2 + 2); // 2

    double* p3 = 0;
    printf("%d\n", p3 + 2); // 16

    return 0;
}
#endif

// Decay 예외
// 1) sizeof
// 2) &
#if 0
int main(void)
{
    int x[3] = { 10, 20, 30 };

    // int* p = &x[0];
    int* p = x;
    printf("%zu\n", sizeof(x));
    printf("%zu\n", sizeof(p));

    // int* p2 = &x; /* NO! */
    int(*p2)[3] = &x;

    return 0;
}
#endif

// int(*p2)[3]
// - (*p2)
//  : p2는 포인터입니다. 가르키는 대상체의 타입은?

// - (*p2)[3]
//  : 가르키는 대상체의 타입은 3개 크기의 배열입니다.
//    배열의 요소 타입은?

// - int(*p2)[3]
//  : 배열의 요소 타입은 int 입니다.

// p2 -------> [[int][int][int]]

// int *p2[3]
// - p2[3]
//  : p2는 3개 크기의 배열입니다. 요소의 타입은?

// - *p2[3]
//  : 요소의 타입은 포인터입니다. 가르키는 대상체의 타입은?

// - int *p2[3]
//  : 가르키는 대상체의 타입은 int 입니다.

// [ * ][ * ][ * ]
//   |    |    |
//  int  int  int
#if 0
void foo(int* x) /* int* x */
{
    printf("%zu\n", sizeof(x));

    for (int i = 0; i < 3; i++) {
        x[i] += 10;
        // *(x+i) += 10
    }
}

void print_array(int* x)
{
    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
}

int main(void)
{
    int x[3] = { 10, 20, 30 };

    foo(x); // foo(&x[0])

    print_array(x);

    return 0;
}
#endif

#if 0
// 배열의 첫번째 원소의 주소를 전달받는 경우,
// 함수 안에서는 배열의 길이를 구할 수 없습니다.
// => 배열의 길이를 추가적인 인자로 전달받아야 합니다.
void print_array(int* x, size_t len)
{
    for (int i = 0; i < len; i++) {
        printf("%d\n", x[i]);
    }
}

int main(void)
{
    int x[3] = { 10, 20, 30 };
    print_array(x, 3);

    int y[5] = { 1, 2, 3, 4, 5 };
    print_array(y, 5);

    return 0;
}
#endif

int main(void)
{
    int x[3] = { 10, 20, 30 };

    // &* -> 상쇄

    // &x[0]
    // = &*(x + 0)
    // = x + 0
    // = x

    return 0;
}
