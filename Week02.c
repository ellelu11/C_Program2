/* 

Michelle Lugo
CIS 236
Week 02 homework
For week 02 homework, i created a program that computes the area and the circumfrence of a circle.

*/


#include <stdio.h>

int main (void)
{
	float radius;
	
	float area;
	
	float ci;
	
    printf("Enter a value for the radius in inches: \n"); // ask the user to input a value.
    
    scanf("%f", &radius);

    float pi = 3.14; // value of pi is 3.14
    
    area = pi*radius*radius; // calculate the area
    
    printf("The area of a circle with radius %.f is %.2f \n", radius,  area);

    ci = 2*pi*radius; // calculate the circumfrence
    
    printf("The circumference of a circle with radius %.f is %.2f", radius,  ci);
	
	
}
