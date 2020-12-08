#include <stdio.h>
#include <float.h>

#define PI 3.1415926

//default values
float radius = 0;

float c = 0;

float a = 0;

float d = 0;

//functions to calculate circumference, area, and diameter
float circumference()
{
    c = 2 * PI * radius;
    return c;
}

float diameter()
{
    d = 2 * radius;
    return d;
}

float area()
{
    a = PI * (radius * radius);
    return a;
}

//main function
int main()
{
    //Gets input for radius
    printf("Enter a radius: ");
    scanf("%f", &radius);

    //Checks if user entered a valid radius
    if (radius >= 0)
    {
        //Assigns area, diameter, and circumference to 3 variables and prints them
        a = area();

        d = diameter();

        c = circumference();

        printf("A circle with radius %.3f\n \tDiameter: %.3f\n \tArea: %.3f\n \tCircumference: %.3f\t", radius, d, a, c);
    }
    else
    {
        //User has entered a value lower than 0
        printf("Invalid radius. Must be greater than zero.");
        return (1);
    }
    return (0);
}