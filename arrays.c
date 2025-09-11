/*
    syntax:
    int variable[size of the array];
*/

#include <stdio.h>
 int arr()
 {
    int marks[3];
    printf("Enter Marks of Physics: ");
    scanf("%d", &marks[0]);

    printf("Enter Marks of Math: ");
    scanf("%d", &marks[1]);

    printf("Enter Marks of C Language: ");
    scanf("%d", &marks[2]);

    printf("Physics Marks: %d\nChemistry Marks: %d\nC Language Marks %d\n", marks[0],marks[1],marks[2]);
}

int arr2()
{
    int price[] = {100, 200 ,300};
}

// 2D Array 
// Visualise as a Matrix

int twoDArr()
{
    int student[2][3] = {{99,99,99},{99,97,98}}; // _ _ _ | _ _ _
    printf("%d ", student[0][0]);
}

int odd()
{
    int count = 0;
    int nums[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        if(nums[i] % 2 != 0)
        {
        count++;
        }
    }
    printf("Number Of Odd Terms: %d", count);
    return 0;
}
 
int main()
{
    // arr();  
    // arr2();
    // twoDArr();
    // odd();

    return 0;
}