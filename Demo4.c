/*Program to calculate Area and Circumference based on user input*/

#include <stdio.h>
int main()
{
   int r;
   float PI_VALUE=3.14, circle_area, circle_circumf;

   //Ask user to enter the radius of circle
   printf("\nEnter radius of circle: ");
   //Storing the user input into variable circle_radius
   scanf("%d",&r);

   //Calculate and display Area
   circle_area = PI_VALUE * r * r;
   printf("\nArea of circle is: %f",circle_area);

   //Caluclate and display Circumference
   circle_circumf = 2 * PI_VALUE * r;
   printf("\nCircumference of circle is: %f",circle_circumf);

   return(0);
}
