#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    /* lower limit of temperatuire scale */
    /* upper limit */
    /* step size */
    celsius = lower;

    printf("%s %6s\n", "C.", "F.");
    while (celsius <= upper) {
        fahr = 32 + ((9.0/5.0) * celsius);
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

