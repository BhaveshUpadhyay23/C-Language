#include <stdio.h>

int solidRectangle()
{
    int rows, column;
    printf("Enter Number of rows: ");
    scanf("%d",&rows);
    printf("Enter Number of column: ");
    scanf("%d",&column);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=column; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int numRectangle()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    printf("Enter Number of Column: ");
    scanf("%d", &column);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=column; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}


int starTriangle()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int upstarTriangle()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(int i=rows; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int invnumTriangle()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(int i=rows; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

int numTriangle()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

int oddNumTriangle()
{
    int lastTerm;
    printf("Enter Last Term: ");
    scanf("%d", &lastTerm);

    for (int i = 1; i <= lastTerm; i+=2)
    {
        for (int j = 1; j<=i; j+=2)
        {  
           printf("%d ",j);
        }
        printf("\n");
    }
    
}

int alphaRect()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    printf("Enter Number of Column: ");
    scanf("%d", &column);

    for(int i=1; i<=rows; i++)
    {
        int asciiof = 65;
        for(int j=1; j<=column; j++)
        {

            printf("%c ", asciiof);
            asciiof++;
        }
        printf("\n");
    }
}


void alphaTri()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(int i=1; i<=rows; i++)
    {
        int asciiof = 65;
        for(int j=1; j<=i; j++)
        {

            printf("%c ", asciiof);
            asciiof++;
        }
        printf("\n");
    }
}

void alphaNumTri()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(int i=1; i<=rows; i++) 
    {
        if(i%2 != 0)
        {
            for(int k=1; k<=i; k++) 
            {
                printf("%d ", k);  
            }
            printf("\n");
        }
        else
        {
            int asciiof = 65;
            for(int j=1; j<=i; j++)   
            {
                printf("%c ", asciiof);
                asciiof++;
            }
            printf("\n");
        }
    }
}

void starPlus()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    printf("Enter Number of Column: ");
    scanf("%d", &column);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=column; j++)
        {
            if(i==(rows+1)/2 || j==(column+1)/2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


void hollowRect()
{
    int rows, column;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    printf("Enter Number of Column: ");
    scanf("%d", &column);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=column; j++)
        {
            if(i==1 || i==rows || j==1 || j==column)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}



int main()
{   
    printf("Solid Rectangle\n");
    solidRectangle();

    printf("Number Rectangle\n");
    numRectangle();

    printf("Star Right Angle Triangle\n");
    starTriangle();

    printf("Up side down Star Right Angle Triangle\n");
    upstarTriangle();

    printf("inverted Number Right Angle Triangle\n");
    invnumTriangle();

    printf("Number Right Angle Triangle\n");
    numTriangle();

    printf("Number Right Angle Triangle\n");
    oddNumTriangle();

    printf("Alphabets Rectangle\n");
    alphaRect();

    printf("Alphabets Triangle\n");
    alphaTri();

    printf("AlphaNumeric Triangle\n");
    alphaNumTri();

    printf("starPlus\n");
    starPlus();

    printf("Hollow Rectangle\n");
    hollowRect();

}
