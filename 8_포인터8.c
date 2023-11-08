// 8_포인터8.c
#include <stdio.h>

// 포인터 산술 연산
// 1) 포인터 + 정수
// = 포인터 + 가르키는 대상체의 크기 * 정수

// 2) 포인터 - 정수
// = 포인터 - 가르키는 대상체의 크기 * 정수

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
