// for Loop

/*
    for(initialisation; condition; updation){
        CODE
    }
*/

#include <stdio.h>
int count()
{
    for(int i=1; i<=10; i++){
        printf("%d ", i);
    }
    return 0;
}

int matrix()
{
    for(int i=1; i<+5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
    return 0;
}


int alphabet(){
    for(char ch='a'; ch<='z'; ch++)
    {
        printf("%c ",ch);
    }
    return 0;
}

void sumnreverse()
{
    int sum=0, num;
    printf("Enter Last Element: ");
    scanf("%d", &num);
    for(int i=1,j=num; i<=num, j>=1; i++, j--)
    {
        sum = sum + i;
        printf("%d ", j);
    }
    printf("\nSum is: %d", sum);
}

int main(){
    count();
    matrix();
    alphabet();
    printf("\n");
    sumnreverse();
    return 0;
}