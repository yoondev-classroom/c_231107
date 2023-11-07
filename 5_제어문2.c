// 5_제어문2.c
#include <stdio.h>

#if 0
int main(void)
{
    // i: 0 - 9
    for (int i = 0; i < 10; i++) {
    }

    // i: 1 - 10
    for (int i = 1; i <= 10; i++) {
    }

    return 0;
}
#endif

// break
// => 반복문을 탈출할 때 사용합니다.

// flag를 이용해서, 중첩된 반복문을 탈출하는 방법
#if 0
int main(void)
{
    int flag = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (i + j > 7) {
                // 전체 루프 탈출
                printf("---- break ----\n");
                flag = 1;
                break;
            }

            printf("%d, %d\n", i, j);
        }

        if (flag) {
            break;
        }
    }
}
#endif

// 일반적으로 goto문을 사용하는 것은 좋지 않습니다.
#if 0
int main(void)
{
    int score;
retry:
    scanf("%d", &score);

    if (score < 70) {
        goto fail;
    } else {
        goto retry;
    }

fail:
    printf("fail\n");
}
#endif

// goto
// 1) 중첩된 반복문을 탈출할 때
// 2) 오류 처리
#if 0
int main(void)
{
    int flag = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (i + j > 7) {
                // 전체 루프 탈출
                printf("-----\n");
                goto out;
            }

            printf("%d, %d\n", i, j);
        }
    }

out:

    return 0;
}
#endif

int main(void)
{
#if 0
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }

        printf("%d\n", i);
    }
#endif

    // while 문에서 continue를 사용할 때는 주의해야 합니다.
    int i = 1;
    while (i <= 10) {
        if (i % 2 == 0) {
            i++; // !!
            continue;
        }

        printf("%d\n", i);
        i++;
    }

    return 0;
}
