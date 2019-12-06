#include "temperatureConversion.h"

void fahrToCelsius(int lower, int upper, int step){
    int fahr, celsius;
    fahr = lower;

    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void celsiusToFahr(int lower, int upper, int step){
    int fahr, celsius;
    celsius = lower;
    while(celsius <= upper){
        fahr = (celsius * 9) / 5 + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}