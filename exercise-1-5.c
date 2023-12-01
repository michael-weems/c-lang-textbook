#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    printf("%s %6s\n", "C.", "F.");
    for (float celsius = upper; celsius >= lower; celsius -= step) {
        fahr = 32 + ((9.0/5.0) * celsius);
        printf("%6.1f %3.0f\n", celsius, fahr);
    }
}

