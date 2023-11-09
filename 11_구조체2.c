// 11_구조체2.c
#include <stdio.h>

struct Data {
    int a;
    int b;
    double c;

    int buffer[4096];
};

#if 0
void foo(struct Data data)
{
    printf("foo: %d\n", data.a);
}
#endif

#if 0
void foo(const struct Data* data)
{
    // printf("foo: %d\n", (*data).a);
    printf("foo: %d\n", data->a);
}

int main(void)
{
    struct Data data;
    // foo(data);
    foo(&data);

    printf("%zu\n", sizeof(data));

    return 0;
}
#endif

#if 0
// 지역변수의 주소를 반환하는 것은 미정의 동작의 원인이 됩니다.
struct Data* foo(void)
{
    struct Data result = { 0 };

    return &result;
}

int main(void)
{
}
#endif

// - 정적 메모리의 주소를 반환
// 1. 아래 함수는 스레드 안전하지 않습니다.
#if 0
struct Data* foo(void)
{
    static struct Data result = { 0 };

    return &result;
}

int main(void)
{
    struct Data* p1 = foo();
    p1->a = 100;

    struct Data* p2 = foo();
    p2->a = 200;

    printf("%d\n", p1->a);

    return 0;
}
#endif

#if 0
#include <stdlib.h> // malloc

// 1. 누수의 위험성이 크다.
// 2. 실패 가능한 함수가 됩니다.
struct Data* foo(void)
{
    struct Data* result = malloc(sizeof(struct Data));
    return result;
}

int main(void)
{
    struct Data* p1 = foo();
    p1->a = 100;

    struct Data* p2 = foo();
    p2->a = 200;

    printf("%d\n", p1->a);

    return 0;
}
#endif

#include <string.h>
// strtok
// : char *strtok( char *str, const char *delim );

#if 0
int main(void)
{
    char str[32] = "hello,world,show,me,the,money";

    char* p = strtok(str, ",");
    printf("%s\n", p);

    p = strtok(NULL, ",");
    printf("%s\n", p);

    p = strtok(NULL, ",");
    printf("%s\n", p);

    p = strtok(NULL, ",");
    printf("%s\n", p);

    p = strtok(NULL, ",");
    printf("%s\n", p);

    p = strtok(NULL, ",");
    printf("%s\n", p);

    return 0;
}
#endif

#if 0
void foo(void)
{
    char str[32] = "xasdads aasdlkjadklsj";
    strtok(str, " ");
}

int main(void)
{
    char str[32] = "hello,world,show,me,the,money";

    char* p = strtok(str, ",");

    foo();

    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, ",");
    }

    return 0;
}
#endif

#if 0
int main(void)
{
    char buf[1024] = "hello";

    // char* p = malloc(strlen(buf) + 1);
    // strcpy(p, buf);
    char* p = strdup(buf);

    free(p);

    return 0;
}
#endif
