#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size
                                                        {   
    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("\tFahrenheit Celsius\n");
    }

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("\t%3d \t %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}