// 4_표준입출력2.c
#include <stdio.h>

// 실행 가능한 파일  - 프로그램
// 실행 중인 프로그램 - 프로세스

// 1. 표준 입력 장치 - stdin
//    표준 출력 장치 - stdout
//    표준 에러 장치 - stderr

// 2. 표준 입출력 장치(stdin/stdout)은
//    엔터('\n')를 기준으로 버퍼링을 수행합니다.
#if 0
int main(void)
{
    printf("Hello");
    fflush(stdout);

    while (1) { }
}
#endif

#if 0
int main(void)
{
    int a;
    int b;

    scanf("%d", &a);
    printf("a: %d\n", a);

    scanf("%d", &b);
    printf("b: %d\n", b);

    return 0;
}
#endif

// 3. Unix / Linux
//  => 모든 것은 파일입니다.

// 4. 입력과 출력을 처리하는 개념을 파일의 입출력과
//    동일시해야 합니다.
int main(void)
{
    // FILE* fp = fopen("a.txt", "r");

    int n;
    int sum = 0;
#if 0
    while (fscanf(stdin, "%d", &n) == 1) {
        sum += n;
    }
#endif
    while (scanf("%d", &n) == 1) {
        sum += n;
    }

    printf("sum: %d\n", sum);

    return 0;
}
