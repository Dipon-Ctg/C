#include<stdio.h>
#include<conio.h>
 main()
{
	int a,b,c;
	float s,area;
	printf("\n Enter the value of a,b,c  - ");
	scanf("%d %d %d, &a,&b,&c");
	s=(a+b+c)/2;
	printf("\n Perimeter of the triangle: %2f", 2*s);
	area=(s*(s-a)*(s-b)*(s-c) );
	printf("\n Area of the triangle is: %2f",area);
	
	//getch();
	//return;	
	}
