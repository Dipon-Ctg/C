#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
float a, b, c, s, area;
printf ("Enter the value of 3 arms of a triangle:");
scanf ("%f %f %f" , &a, &b, &c);
s = (a + b + c) / 2;
printf(" \n The perameter of the triengle is: %2f", 2*s);
area = sqrt (s*(s-a)* (s-b)* (s-c));
printf ("\n The area of a triangle = %f",area);
getch ();
}
