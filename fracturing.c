#include <stdio.h>
#include <math.h>

#define PI 3.14159

// This file prompts the user for the two points that define the diameter of a circle that encloses a city and calculates
// the distance between the two points, which is the diameter, the perimeter, the area, the width, and the height of the circle

// scans for a user input and returns that as a double
double askForUserInput()
{
    // This scans the user input, then returns that as a double
    double input;
    scanf("%lf", &input);
    return input;
} ;

// a function that prompts the point data, prints the two points, and returns the diameter of the circle
// the reason I made this helper function is because this code was copied between all following functions
// and I wanted to condense it into this one function
double calculateDiameter() {

    printf("Input x-value for point 1: ");
    double x1 = askForUserInput();
    printf("Input y-value for point 1: ");
    double y1 = askForUserInput();
    printf("Input x-value for point 2: ");
    double x2 = askForUserInput();
    printf("Input y-value for point 2: ");
    double y2 = askForUserInput();
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf \n", x2, y2);

    // a^2 + b^2 = c^2
    double xdist = pow(x2 - x1,2.0);
    double ydist = pow(y2 - y1,2.0);
    double diam = sqrt(xdist + ydist); 
    return diam;
}

// calculates the distance between the two points, aka the diameter
double calculateDistance()
{
    // calls calculate diameter and prints the returned value
    double diam = calculateDiameter();
    printf("The distance between the two points is %.2lf. \n\n", diam);
    return 1.0;
} ;

// calculates the perimeter of the circle
double calculatePerimeter()
{
    
    // calculates the diameter and halves it to get the radius
    // and then uses 2 * PI * radius = the perimeter
    double diam = calculateDiameter();
    double radius = diam / 2;
    double perimiter = 2 * PI * radius;
    
    // prints out the perimeter 
    printf("The perimeter of the city enclosed by your request is %.2lf. \n\n", perimiter);
    return 1.5;
} ;

// calculates the area of the circle
double calculateArea()
{
    // calculates the diameter and halves it to get the radius
    // and then uses PI * radius ^ 2 = the area
    double diam = calculateDiameter();
    double radius = diam / 2;
    double area = PI * pow(radius,2.0);
    
    // prints out the area
    printf("The area of the city enclosed by your request is %.2lf. \n\n", area);
    return 1.5;
} ;

// I don't know if I'm missing something, but the height and width of a circle are identical to the diameter, so why
// do we have 3 functions that need to do the same thing?

// calculates the width of the circle
double calculateWidth()
{
    // calculates the diameter
    double diam = calculateDiameter();
    
    // prints out the width 
    printf("The width of the city enclosed by your request is %.2lf. \n\n", diam);
    return 1.0;
} ;

// calculates the height of the circle
double calculateHeight()
{
    // calculates the diameter
    double diam = calculateDiameter();

    // prints out the height 
    printf("The height of the city enclosed by your request is %.2lf. \n\n", diam);
    return 1.0;
} ;

// the main function that calls all other functions
int main(int argc, char **argv) {  
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
} ;