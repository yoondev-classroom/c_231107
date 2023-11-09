// 11_구조체.c
#include <stdio.h>

// int add(int a, int b) { return a + b;}

// 복소수의 합을 구하는 함수를 만들어봅시다.
// 3 + 10i
// 2 + 5i

#if 0
int add(int ar, int ai, int br, int bi)
{
}

int main(void)
{
    int ar = 3, ai = 10; // 3 + 10i
    int br = 2, bi = 5; // 2 + 5i

    return 0;
}
#endif

// 1) 파라미터를 결과를 전달받기 위한 용도로 사용하면 됩니다.
// => Out Parameter
#if 0
void add(int ar, int ai, int br, int bi, int* rr, int* ri)
{
    *rr = ar + br;
    *ri = ai + bi;
}

int main(void)
{
    int ar = 3, ai = 10; // 3 + 10i
    int br = 2, bi = 5; // 2 + 5i

    int rr, ri;

    add(ar, ai, br, bi, &rr, &ri);
    printf("%d + %di\n", rr, ri);

    return 0;
}
#endif

// 2. 사용자 정의 타입을 만듭니다.
// => struct
// => 추상화
//    데이터 캡슐화

struct Complex {
    int real; // 멤버 데이터 변수
    int image; // 멤버 데이터 변수
};

// int add(int a, int b) {}

#if 0
struct Complex add(
    struct Complex c1, struct Complex c2)
{
    struct Complex result;

    result.real = c1.real + c2.real;
    result.image = c1.image + c2.image;

    return result;
}

int main(void)
{
    // struct Complex c1 = { 10, 5 };
    // struct Complex c2 = { 20, 3 };

    // C99
    struct Complex c1 = { .real = 10, .image = 5 };
    struct Complex c2 = { .real = 20, .image = 3 };

    printf("%d + %di\n", c1.real, c1.image);
    printf("%d + %di\n", c2.real, c2.image);

    struct Complex result = add(c1, c2);

    printf("%d + %di\n", result.real, result.image);

    return 0;
}
#endif

#if 0
struct Complex add(
    const struct Complex* c1,
    const struct Complex* c2)
{
    struct Complex result;

    result.real = c1->real + c2->real;
    result.image = c1->image + c2->image;

    return result;
}

int main(void)
{

    struct Complex c1 = { .real = 10, .image = 5 };
    struct Complex c2 = { .real = 20, .image = 3 };

    printf("%d + %di\n", c1.real, c1.image);
    printf("%d + %di\n", c2.real, c2.image);

    struct Complex result = add(&c1, &c2);

    printf("%d + %di\n", result.real, result.image);

    return 0;
}
#endif

void add(
    const struct Complex* c1,
    const struct Complex* c2,
    struct Complex* result)
{
    result->real = c1->real + c2->real;
    result->image = c1->image + c2->image;
}

int main(void)
{

    struct Complex c1 = { .real = 10, .image = 5 };
    struct Complex c2 = { .real = 20, .image = 3 };

    printf("%d + %di\n", c1.real, c1.image);
    printf("%d + %di\n", c2.real, c2.image);

    struct Complex result;
    add(&c1, &c2, &result);

    printf("%d + %di\n", result.real, result.image);

    return 0;
}

// chansik@yoondev.io
