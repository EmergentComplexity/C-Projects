

/*
Peter sanchez
2/23/2022
Dopant dose from a constant source

Calculate the dopant dose in units of (cm-2) in a semiconductor assuming the parameters given below:

Case: Constant Surface Concentration
Surface concentration: Cs = 2 × 1019 (cm-2)
Diffusivity: D = 1 × 10-13 (cm2/sec)
Time: t = 3,733 (sec)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EXP 2.71828182846
#define PI 3.14159265359

int main() {

   
    float D = 1 * pow(10, -13); //cm^2/sec
    float t = 3625;   // sec
    float x = 0.0001; //cm
    
    // for a constant source, this is the solution to Ficks Second Law
    float C = 2 * pow(10,19);
    float Q = ((C / pow(EXP, ((-x * x)/(4 * D * t) ))) * sqrt(PI * D * t));
    printf(" Your dose is %e cm^-2\n", Q);

    return 0;
}