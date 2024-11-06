#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size
                                                        {   
    printf("\nFahrenheit to Celsius Conversion Table\n");
    printf("\nFahrenheit \t Celsius\n");
    }

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("\n%3d \t\t %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
