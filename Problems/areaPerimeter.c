#include <stdio.h>
#define PI 3.14159

float Area(float);
float Perimeter(float);

int main() {
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);

    printf("Area of circle: %f\n", Area(radius));
    printf("Perimeter of circle: %f\n", Perimeter(radius));

    return 0;
}

float Area(float radius){
    return PI * radius * radius;
}

float Perimeter(float radius){
    return 2 * PI * radius;
}