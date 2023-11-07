// 6_배열.c
#include <stdio.h>

#if 0
int main(void)
{
    int score1;
    int score2;
    int score3;

    scanf("%d", &score1);
    scanf("%d", &score2);
    scanf("%d", &score3);

    printf("%d\n", score1 + score2 + score3);

    return 0;
}
#endif

#if 0
int main(void)
{
    int score[3];
    // 동일한 타입의 메모리를 연속적으로 할당합니다.

    // scanf("%d", &score[0]);
    // scanf("%d", &score[1]);
    // scanf("%d", &score[2]);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &score[i]);
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += score[i];
    }

    printf("%d\n", sum);

    return 0;
}
#endif

int main(void)
{
    // int arr[3] = {}; /* 표준 X */

    // int arr[3] = { 0, };
    int arr[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
