// 8_포인터11.c
#include <stdio.h>

#if 0
void swap(void* a, void* b, int width)
{
    unsigned char* p = a;
    unsigned char* q = b;
    unsigned char temp;

    for (int i = 0; i < width; i++) {
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

void sort(void* x, int n, int width, int (*cmp)(void*, void*))
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (cmp((char*)x + i * width,
                    (char*)x + j * width)
                > 0) {

                swap((char*)x + i * width, (char*)x + j * width, width);
            }
        }
    }
}

int cmp1(void* a, void* b)
{
    int* pa = a;
    int* pb = b;

    return *pa - *pb;
}

int main(void)
{
    int x[5] = { 5, 4, 3, 2, 1 };
    sort(x, 5, sizeof(x[0]), cmp1);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", x[i]);
    }
}
#endif

void swap(void* a, void* b, int width)
{
    unsigned char* p = a;
    unsigned char* q = b;
    unsigned char temp;

    for (int i = 0; i < width; i++) {
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

void sort(void* x, int n, int width, int (*cmp)(void*, void*))
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (cmp((char*)x + i * width,
                    (char*)x + j * width)
                > 0) {

                swap((char*)x + i * width, (char*)x + j * width, width);
            }
        }
    }
}

int cmp1(const void* a, const void* b)
{
    const double* pa = a;
    const double* pb = b;

    return *pa > *pb ? 1 : -1;
}

#include <stdlib.h> // qsort

int main(void)
{
    double x[5] = { 5.3, 4.1, 3.5, 2.7, 1.141 };
    qsort(x, 5, sizeof(x[0]), cmp1);

    for (int i = 0; i < 5; i++) {
        printf("%f\n", x[i]);
    }
}

#if 0
int main(void)
{
    int a = 10;
    int b = 20;
    swap(&a, &b, sizeof(a));
    printf("%d %d\n", a, b);

    double c = 3.14;
    double d = 10.5;
    swap(&c, &d, sizeof(c));
    printf("%f %f\n", c, d);

    return 0;
}
#endif
