// 2_변수6.c
#include <stdio.h>

// typedef
// => 기존 타입에 별명을 부여합니다.
// => 변수를 만들듯이 타입의 별칭을 만들수 있습니다.

#if 0
typedef unsigned char age_t;

int main(void)
{
    // unsigned char age;
    age_t age;

    return 0;
}
#endif

int main(void)
{
    typedef int x_t[3];
    // int[3]

    x_t x;
    x[0] = 10;
    x[1] = 20;
    x[2] = 30;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}
