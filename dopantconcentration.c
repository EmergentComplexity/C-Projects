

/*

Peter sanchez
2/23/2022
Dopant concentration from a limited source

Calculate the dopant concentration C

Case: Limited Source
Dose: Q = 1 × 10^15 (cm^-2)
Diffusivity: D = 1 × 10^-13 (cm^2/sec)
Time: t = 3,850      (sec)
Position: x = 0.0001 (cm)

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EXP 2.71828182846
#define PI 3.14159265359

int main() {

    float Q = 1 * pow(10,15);   // cm^-2
    float D = 1 * pow(10, -13); //cm^2/sec
    float t = 3850;   // sec
    float x = 0.0001; //cm
    
    // for a limited source, this is the solution to Ficks Second Law
    float C = (Q/(2 * sqrt(PI * D * t))) * pow(EXP, ((-x * x)/(4 * D * t) ));

    printf(" Your cooncentration is %e cm^-3\n", C); // cm^-3

    return 0;
}