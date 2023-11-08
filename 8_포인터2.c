// 8_포인터2.c
#include <stdio.h>

void Increment1(int x)
{
    ++x;
}

void Increment2(int* px)
{
    ++(*px);
}

int main(void)
{
    int x = 0;
    // Increment1(x); // Call by value
    Increment2(&x); // Call by reference / address / pointer

    printf("x: %d\n", x);

    return 0;
}
