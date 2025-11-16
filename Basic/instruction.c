/*
    Instructions 

    1. Type Declaration
        a. cannot declare and use at the same time
                int a = b = c = 4;

    2. Arithmetic
        a. Type Conversion
        int op float = float

        b. Operator Precendence
        *, /, % ---> +, - ---> =
        L -> R (is same precendence)

    3. Control
        a. Sequence
        b. Decision
        c. Loop
        d. Case
*/


#include <stdio.h>

int main(){
    
    printf("%d\n", 5*2-2*3); // 4
    printf("%d\n", 5*2/2*3); // 15
    printf("%d\n", 5*(2/2)*3); // 15
    printf("%d\n", 5+2/2*3); // 8

    return 0;
}