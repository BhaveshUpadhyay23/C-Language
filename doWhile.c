#include <stdio.h>

int num()
{
    int i=1;
    do
    {
        printf("%d ",i);
        i++;
    } while (i<11);
    return 0;
}

int odd()
{
    int i;
    do
    {
        printf("Enter a Number: ");
        scanf("%d", &i);
    } while (i%3 != 0);
    
}

int main()
{
    num();
    printf("\n");
    odd();
}