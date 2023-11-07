// 4_표준입출력.c

#include <stdio.h>
// Standard Input/Output

// 0: stdin(표준 입력 장치) -> 키보드
// 1: stdout(표준 출력 장치) -> 모니터
// 2: stderr(표준 에러 장치) -> 모니터
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
#if 0
int main(void)
{
    // printf("Hello");
    fprintf(stderr, "Hello");

    while (1) {
    }

    return 0;
}
#endif

#if 0
int main(void)
{
    int a;
    // 주소를 전달해야 합니다.
    // scanf("%d", &a);
    fscanf(stdin, "%d", &a);

    printf("출력: %d\n", a);

    return 0;
}
#endif

#if 0
int main(void)
{
    // FILE* fp = fopen("a.txt", "w");

    FILE* fp = stdout;

    fprintf(fp, "Hello, C\n");
    fprintf(fp, "Hello, C\n");
    fprintf(fp, "Hello, C\n");

    // fclose(fp);

    return 0;
}
#endif

#if 0
// 파일 입출력
// => UNIX/Linux
//   모든 것은 파일입니다.

// open
// read   -> 일반 파일이면 파일에 입출력
// write     장치 파일이면 디바이스 입출력
// close     소켓 파일이면 패킷 송수신

// stdin에서 파일의 끝을 알리는 방법
//  - Windows: Ctrl + Z
//  -   Linux: Ctrl + D

int main(void)
{
    // FILE* fp = fopen("a.txt", "r");
    // if (fp == NULL) {
    //     fprintf(stderr, "File open error!\n");
    // }
    FILE* fp = stdin;

    int n;
    int sum = 0;
    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
    }

    printf("sum: %d\n", sum);
    return 0;
}
#endif

int main(void)
{
    int n = 10;
    scanf("%d", &n);

    printf("%d\n", n);

    return 0;
}
