// 10_문자열2.c
#include <stdio.h>

#if 0
int xstrlen(const char* s)
{
    const char* p = s;
    int len = 0;
    while (*p != '\0') {
        ++p;
        ++len;
    }

    return len;
}
#endif

#if 0
int xstrlen(const char* s)
{
    const char* p = s;

    while (*p != '\0') {
        ++p;
    }

    return p - s;
}

#include <string.h>
// strlen: 문자열의 길이를 구할 수 있습니다.

int main(void)
{
    char str1[32] = "hello";
    printf("%d\n", xstrlen(str1));

    return 0;
}
#endif

#if 0
int main(void)
{
    char str1[32] = "hello";
    // char* s = "hello";
    const char* s = "hello";

    // s[0] = 'x'; /* 미정의 동작 */

    return 0;
}
#endif

#include <string.h>
// int strcmp(s1, s2)
//   s1 > s2: 양수
//  s1 == s2: 0
//   s1 < s2: 음수
#if 0
int main(void)
{
    const char* s1 = "zhello";
    // const char* s2 = "hello";
    char s2[32] = "hello";

    // if (s1 == s2) {
    // }
    int result = strcmp(s1, s2);
    if (result == 0) {
        printf("동일한 문자열을 가집니다.\n");
    } else if (result > 0) {
        printf("s1이 사전적으로 뒤에 위치합니다.\n");
    } else {
        printf("s1이 사전적으로 앞에 위치합니다.\n");
    }

    return 0;
}
#endif

#include <string.h> // strcpy
// char *strcpy( char *dest, const char *src );

int main(void)
{
    char str[32] = "hello";
    printf("%s\n", str);

    // str = "world";
    strcpy(str, "world");
    // str이 전달된 문자열을 저장할 수 있는 충분한 크기를 가져야
    // 합니다.
    printf("%s\n", str);

    strcat(str, " hello");
    printf("%s\n", str);

    return 0;
}
