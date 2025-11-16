// Logical Operator
/*
    && = AND
        Both must be true

    || = OR
        one must be true

    ! = NOT
*/

#include <stdio.h>
int main(){

    // &&
    printf("%d\n", 5>3 && 12>9);
    printf("%d\n", 5>3 && 12>19);

    // ||
    printf("%d\n", 5>3 || 12>9);
    printf("%d\n", 5>3 || 12>19);
    printf("%d\n", 5>13 || 12>19);

    // !
    printf("%d\n", !(5>13 || 12>19));

} 

// Precendence (T -> B)
/*
    !
    *, /, %
    +, -
    <, <=, >, >=
    ==, !=
    &&
    ||

*/