// 4_표준입출력.c

#include <stdio.h>
// Standard Input/Output

// 0: stdin  -> 키보드
// 1: stdout -> 모니터
// 2: stderr -> 모니터
// => 표준 입출력 파일입니다.
// => 프로세스가 처음 시작할 때, 열려 있습니다.

#if 0
int main(void)
{
    // printf("Hello, C\n");
    fprintf(stdout, "Hello, C\n");
    fprintf(stderr, "Hello, C\n");

    return 0;
}
#endif

// 표준 입/출력은 버퍼링을 수행합니다.
// => 엔터가 입력되어야 입출력 처리를 수행합니다.

// 표준 에러 장치는 버퍼링을 수행하지 않습니다.

int main(void)
{
    // printf("Hello");
    fprintf(stderr, "Hello");

    while (1) {
    }

    return 0;
}
