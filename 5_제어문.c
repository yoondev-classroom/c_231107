// 5_제어문.c
#include <stdio.h>

// Conditional Statement(조건문)
// - if
// - if-else
// - if-else if-else
// - switch

#if 0
int main(void)
{
    int score;
    scanf("%d", &score);

    // 조건의 범위를 좁은 범위에서 넓히는 형태로 만드는게 좋습니다.
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else {
        printf("Fail\n");
    }
    // if - else if 문에서 반드시 else문을 사용해야 합니다.

    return 0;
}
#endif

#if 0
int main(void)
{
    char grade;
    scanf("%c", &grade);

    int score = 0;
    if (grade == 'A') {
        score = 100;
    } else if (grade == 'B') {
        score = 80;
    } else if (grade == 'C') {
        score = 70;
    } else if (grade == 'D') {
        score = 60;
    } else {
        score = 50;
    }

    printf("score: %d\n", score);

    return 0;
}
#endif

#if 0
int main(void)
{
    char grade;
    scanf("%c", &grade);

    // - break 문을 반드시 사용해야 합니다.
    // - default문을 반드시 제공해야 합니다.
    // - default문을 switch 문의 가장 처음과 마지막에만 사용해야 합니다.

    int score = 0;
    switch (grade) {
    case 'A':
        score = 100;
        break;
    case 'B':
        score = 80;
        break;
    case 'C':
        score = 70;
        break;
    case 'D':
        // fallthrough
    default:
        score = 50;
        break;
    }

    printf("score: %d\n", score);

    return 0;
}
#endif

// DRY
// => Don't Repeat Yourself

// Iterative Statement(반복문)
// - while
// - for
// - do-while

/*
while (조건) {

}
*/

int main(void)
{
    int n = 5;
    // 반복횟수가 명확하지 않을 때
    while (n > 0) {
        printf("Hello, C\n");
        --n;
    }

    // 반복횟수가 명확할 때
    for (int i = 0; i < 5; i++) {
        printf("Hello, C\n");
    }

    return 0;
}
