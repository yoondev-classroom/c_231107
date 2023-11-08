// 8_포인터4.c
#include <stdio.h>

#if 0
void foo(int x[3])
{
    for (int i = 0; i < 3; i++) {
        x[i] += 10;
    }
}

void print_array(int x[3])
{
    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
}

int main(void)
{
    int x[3] = { 10, 20, 30 };

    foo(x);

    print_array(x);

    return 0;
}
#endif

#if 1
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

#if 0
int main(void)
{
    int* p = 0;
    printf("%d\n", p + 2);

    return 0;
}
#endif
