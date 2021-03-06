#include <stdio.h>
#include <math.h>
#include <.h>

main( ) 
{
 float a, b, c;
 float disc, root1, root2;
 float real, imag;
 int ch=0;
 printf("\n Enter the Coefficients of the Equation : ax2+bx+c=O ? : ");
 scanf("%f%f%f",&a, &b, &c);
 if( a == 0 || b == 0 || c == 0) // Check for non-zero coefficients 
  printf("\n\n Error: Coefficients value must be Non-Zero...");
 else
  {
 	disc = b * b - 4 * a * c;
 	if(disc < 0 )
 	ch = 1;
 	else if( disc == 0 )
 	ch = 2;
 	else
 	ch = 3;
 	switch(ch)
 	{
 	 case 1: //  Case: imaginary roots 
 	 printf("\n\n Roots are Imaginary...");
 	 real = -b / (2 * a);
 	 imag = sqrt(fabs(disc)) / (2 * a);
 	 printf("\n\n Complex Root1 = %7.4f +i %7.4f",real, imag);
 	 printf("\n Complex Root2 = %7.4f -i %7.4f",real, imag);
 	 break;
 	 case 2: //  Case: real and identical roots 
 	 printf("\n\n Roots are Real & Identical...");
 	 root1 = -b / (2 * a);
 	 root2 = root1;
 	 printf("\n\n Root1 = %7.4f",root1);
 	 printf("\n Root2 = %7.4f",root2);
 	 break;
 	 case 3: // Case: real and distinct roots 
 	 printf("\n\n Roots are Real & Distinct...");
 	 root1 = (-b + sqrt(disc)) / (2 * a);
 	 root2 = (-b - sqrt(disc)) / (2 * a);
 	 printf("\n\n Root1 = %7.4f",root1);
 	 printf("\n Root2 = %7.4f",root2);
 	 break;
 	 default:
 	 printf("Invalid Choice");
 	} 
  }
} 

