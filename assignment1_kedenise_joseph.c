#include <stdio.h>
#include <math.h>
 
int main(int argc, char **argv){




    return 0
}

double calculateDistance(){
    // setting initial value
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double distance;

    // asking user for points and saving them 
    printf("Enter x1:\n");
    scanf("%lf", & x1);

    printf("Enter y1:\n");
    scanf("%lf", &y1);

    printf("Enter x2:\n");
    scanf("%lf", &x2);

    printf("Enter y2:\n");
    scanf("%lf", %y2);

    // printing the point numbers 
    printf("Point #1: x1 = %.2lf and y1 = %.2lf\n", x1, y1);
    printf("Point #2: x2 = %.2lf and y2 = %.2lf\n", x2, y2);

     // distance calculator
    double distance = sqrt(pow (x2 − x1,2)+ pow(y2 − y1,2));
    
    printf("The distance is %.2lf\n", distance);
    return int distance;
}

double calculatePerimeter(){
    
double x1, y1, x2, y2;
    
    // asking use for inputs
    printf("Enter x1:");
    scanf("%lf", &x1);
    
    printf("Enter y1:");
    scanf("%lf", &y1);
    
    // asking user for second point
    printf("Enter x2:");
    scanf("%lf", &x2);
    
    printf("Enter y2:");
    scanf("%lf", &y2);
    
    // printing the output
    printf("Point value of x1 = %.2lf and y1 = %.2lf\n", x1, y1);
    printf("Point value of x2 = %.2lf and y2 = %.2lf\n", x2, y2);
    
    // Calculate the perimeter
    double length = fabs(x2 - x1);  
    double width = fabs(y2 - y1);  

    double perimeter = 2 * (length + width); 
    
    // calculated perimeter
    printf("The perimeter of the city is %.2lf\n", perimeter);
    
   
    return 3; 
}

double calculateArea() {
   
    double x1, y1, x2, y2;
    
    // asking user for points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    
    printf("Enter y1: ");
    scanf("%lf", &y1);
   
    printf("Enter x2: ");
    scanf("%lf", &x2);
    
    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    // prinitng the points
    printf("Point value of x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point value of x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    
    // Calculate the length and width
    double length = fabs(x2 - x1);  
    double width = fabs(y2 - y1);  

    // Calculate the area of the rectangle
    double area = length * width;
    
    // calculated area
    printf("The area of the city is %.2lf\n", area);
    
    
    return 2.5; 
}

double calculateWidth() {
    //initial variables
    double x1, y1, x2, y2;
    
    // asking user for values
    printf("Enter x1:");
    scanf("%lf", &x1);
    
    printf("Enter y1:");
    scanf("%lf", &y1);
    
    printf("Enter x2:");
    scanf("%lf", &x2);
    
    printf("Enter y2:");
    scanf("%lf", &y2);
    
    // prinitng the values
    printf("Point value of x1 = %.2lf and y1 = %.2lf\n", x1, y1);
    printf("Point value of x2 = %.2lf and y2 = %.2lf\n", x2, y2);
    
    // Calculating the width 
    double width = fabs(x2 - x1);
    
    // priniting the results
    printf("The width of the city is %.2lf\n", width);
    
    
    return 1; 
