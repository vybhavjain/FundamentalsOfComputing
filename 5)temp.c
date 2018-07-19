#include<stdio.h>

main ()
{
float temp_c, temp_f;
printf ("Enter the value of Temperature in Celcius: ");
scanf ("%f", &temp_c);
temp_f = (9 * temp_c)/5 + 32;
printf ("The value of Temperature in Fahreinheit is: %f", temp_f);
printf("\n Enter the temperature in Fahrenheit: ");
scanf("%f", &temp_f);

temp_c =  (temp_f - 32)/1.8;
printf("Celsius temperature is: %f C\n\n\a", temp_c);
getch( );
}
