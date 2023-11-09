// 9_동적메모리할당.c
// : 표준 라이브러리 함수를 통해 제공합니다.
#include <stdio.h>
#include <stdlib.h> // malloc, free
#if 0


int main(void)
{
    int* p = malloc(sizeof(int));
    // 실패할 경우, NULL을 반환합니다.
    if (p == NULL) {
        printf("Failed\n");
    } else {
        *p = 42;
        printf("%d\n", *p);

        free(p);
        p = NULL; // 더 이상 유효하지 않으므로, NULL을 지정하는 것이 좋습니다.

        free(p);
        // free는 NULL이 전달될 경우, 아무일도 수행하지 않습니다.
    }

    return 0;
}
#endif

int main(void)
{
    int* p = malloc(sizeof(int) * 10);
    *p = 10;
    *(p + 1) = 20;

    p[0] = 100;
    p[1] = 200;

    free(p);

    return 0;
}
