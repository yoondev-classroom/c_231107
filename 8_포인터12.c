// 8_포인터12.c
#include <stdio.h>

#if 0
int main(void)
{
    // 1) const int 변수는
    //    const int* 포인터를 통해 참조해야 합니다.
    const int n = 42;
    // n: const int

    const int* p = &n;

    // 2) 변경 가능한 메모리를 변경 불가능한 포인터를 통해
    //    참조할 수 있습니다.
    int n2 = 42;
    const int* p2 = &n2;
    // p2를 통해서는 값을 변경하지 않고, 읽기만 하겠다는 의도입니다.

    return 0;
}
#endif

int main(void)
{
    int n = 42;

    //        const
    // p1 ----> n
    const int* p1 = &n;
    // *p1 = 42; /* 오류!*/
    p1 = NULL; /* OK */
    int const* p2 = &n;
    // *p2 = 42;
    p1 = NULL; /* OK */

    // const
    //   p3 ----> n
    int* const p3 = &n;
    *p3 = 100; /* OK */
    // p3 = NULL;

    const int* const p4 = &n;
    int const* const p5 = &n;

    return 0;
}
