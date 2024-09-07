#include <stdio.h>
#include <math.h>

double askForUserInput()
{
    // This scans the user input, then returns that as a double

    // part of me feels like this is inefficient over just scanf for 
    // every instance of calling the function, so either this isn't right
    // or I just don't get the question
    double input;
    scanf("%lf", &input);
    return input;
} ;

double calculateDistance()
{

    printf("Input x-value for point 1: ");
    double x1 = askForUserInput();
    printf("Input y-value for point 1: ");
    double y1 = askForUserInput();
    printf("Input x-value for point 2: ");
    double x2 = askForUserInput();
    printf("Input y-value for point 2: ");
    double y2 = askForUserInput();
    double xdist = pow(x2 - x1,2.0);
    double ydist = y2 - y1;
    double dist = 1.0;
    
    //double dist = sqrt(pow(x1 + x2,2) + pow(y1 + y2,2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf \n", x2, y2);
    printf("Distance between the two points is %.2lf. \n", dist);
    return 1.5;
} ;

int main(int argc, char **argv) {  
    calculateDistance();
    return 0;
}

