#include <stdio.h>

void basic()
{
    int a = 5;
    int* x = &a;
    printf("%p\n", &a);
    printf("%p\n", x);
    printf("%d\n", *x);
    return;
}

void modify()
{
    int num = 25;
    int* x = &num;
    printf("%d\n", num);
    *x = 9;
    printf("%d\n  ", num);
    return;

}

void swapwithpointers(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

void swapWithoutPointer(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    basic();
    modify();

    int a = 1, b = 5;
    int* x = &a; int* y = &b;
    printf("Before swap %d %d\n", *x, *y);
    swapwithpointers(x,y);
    printf("after swap %d %d\n", a, b);

    swapWithoutPointer(a,b);
    printf("after swap %d %d\n", a, b);

}

/* 
    NOTES

We can also modify values using pointers 

*/