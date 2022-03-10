

/*
Peter sanchez
2/23/2022
Diffusivity of Phosphorous at a temperature

Calculate the diffusivity in units of (cm2/sec) of the dopant indicated below. Assume the following parameters:

Dopant: Phosphorus
Temperature: T = 1,038 °C
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EXP 2.71828182846
#define PI 3.14159265359


int main() {
    float k = 8.617333262145 * pow(10,-5); //boltzmann constant eV
    float PDo = 4.70; // Do for phosphorous cm^2/sec
    float PEa = 3.68; // Ea for phosphorous eV


    float T = 1038 + 273.15;   // temp in K
    float D = PDo * pow(EXP, ((-PEa)/(k*T)));

    printf(" Your diffusivity is %e cm^2/sec\n", D); 

    return 0;
}