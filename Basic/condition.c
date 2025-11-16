#include <stdio.h>

int phase(){

    int age;
    printf("Enter Age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("You are an adult\n");

    }
    else if(age >=13 && age<18){
        printf("You are a Teenager");
    }
    else{
        printf("You are a Child");
    }

    return 0;
}


// Ternary Operators

/*
    SYNTAX
    
    Condition ? <CODE> if TRUE : <CODE> if FALSE;
*/

int vote(){
    int myAge;
    printf("Enter Your Age: ");
    scanf("%d",&myAge);

    myAge >=18 ? printf("You are eligible to vote") : printf("You are NOT eligible to vote");
    
}

int main(){
    phase();
    vote();
}