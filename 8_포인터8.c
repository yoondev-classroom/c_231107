// 8_포인터8.c
#include <stdio.h>

// 포인터 산술 연산
// 1) 포인터 + 정수
// = 포인터 + 가르키는 대상체의 크기 * 정수

// 2) 포인터 - 정수
// = 포인터 - 가르키는 대상체의 크기 * 정수

#if 0
int main(void)
{
    //                     pivot
    //                       |
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // int* pivot = &arr[3];
    //           &*(arr + 3)
    int* pivot = arr + 3;

    printf("%d\n", *(pivot - 1));
    //             *(pivot + -1)
    printf("%d\n", pivot[-1]);

    return 0;
}
#endif

// 3) 포인터 + 포인터
// => 허용하지 않는 연산입니다.

// 4) 포인터 - 포인터
// => 같은 배열안에서만 사용해야 합니다.
//    주소 간의 상대적 위치(오프셋)을 구할 때 사용합니다.
//    (p1 - p2) / sizeof(대상체 타입)

int main(void)
{
    //                      p1
    //                       |
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //                                   |
    //                                   p2

    int* p1 = arr + 3;
    int* p2 = arr + 7;

    printf("%ld\n", p1 - p2); // -4
    printf("%ld\n", p2 - p1); // 4

    return 0;
}
