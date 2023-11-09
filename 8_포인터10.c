// 8_포인터10.c
#include <stdio.h>

#if 0
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}
#endif
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//         j
//       i
// |-----|
// 1 2 3 4 5

#if 0
void sort(int* x, int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] < x[j]) {
                swap(&x[i], &x[j]);
            }
        }
    }
}

int main(void)
{
    int x[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    sort(x, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}
#endif

#if 1
void sort(int* x, int n, int (*cmp)(int, int))
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // if (x[i] < x[j]) {
            if (cmp(x[i], x[j]) > 0) {
                swap(&x[i], &x[j]);
            }
        }
    }
}

// a > b: 양수
// a < b: 음수
// a = b: 0
int cmp1(int a, int b) { return a - b; }
int cmp2(int a, int b) { return b - a; }

int main(void)
{
    int x[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    sort(x, 10, cmp2);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}
#endif

#if 0
void (*on_click)(void) = NULL;

void set_on_click_listener(void (*fp)(void))
{
    on_click = fp;
}

void button_click(void)
{
    if (on_click) {
        on_click();
    }
}
// -------

void foo(void)
{
    printf("foo\n");
}

int main(void)
{
    set_on_click_listener(foo);

    button_click();

    return 0;
}
#endif
