// 10_문자열.c
#include <stdio.h>

//    코드값
// 'A': 65
// 'a': 97
// '0': 48
#if 0
int main(void)
{
    // char ch = 'A';
    char ch = 65;
    printf("%c\n", ch);

    return 0;
}
#endif

void print_str(const char* str)
{
    const char* p = str;
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
}

// 문자열
// : char 배열인데, 마지막 문자가 '\0'(널문자, 0) 입니다.
int main(void)
{
    char str[32] = { 'H',
        'E',
        'L',
        'L',
        'O',
        '\0' };

    char str2[32] = "HELLO";

    print_str(str);
    print_str(str2);

    printf("%s\n", str);

    return 0;
}
