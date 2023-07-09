#include <stdio.h>
#include <math.h>

typedef enum{circle=1, rectangle}Shape;

typedef struct{
    float radius;
    float area;
    float length1, length2;
    Shape type;
}Dimensions;

void Area(Dimensions dimensions){
    switch(dimensions.type){
        case circle:
            dimensions.area = 3.14*(pow(dimensions.radius,2));
            printf("Area of the circle: %.4f units", dimensions.area);
            break;
        case rectangle:
            dimensions.area = dimensions.length1*dimensions.length2;
            printf("Area of the rectangle: %.4f units", dimensions.area);
            break;
        default:
            printf("Invalid choice!");
    }
}
void main() {
    
    Shape a;
    float b, c;
    
    Dimensions dimensions;
    
    scanf("%d", &a);
    dimensions.type = a;
    
    if(a==1){
        scanf("%f", &b);
        dimensions.radius = b;
    }
    if(a==2){
        scanf("%f %f", &b, &c);
        dimensions.length1 = b; 
        dimensions.length2 = c;
    }
    
    Area(dimensions);
}
