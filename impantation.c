
/*
	
A dopant is implanted into a p-type silicon wafer according to the parameters given below. Calculate the junction depth in units of (cm) assuming no channeling and complete dopant activation.

Dopant: Arsenic
Dose: Q = 33 × 1014 (cm-2)
Energy: E = 50 (KeV)
Substrate initial doping: NA = 1015 (cm-3)

Answer =1.2e-5
*/



#include <math.h>
#include <stdio.h>

#define PI 3.14159265359


 
int main () {
    float Cx = pow(10,15);
    float Q = 33 * pow(10,14);
    float Rp = 0.0362 * pow(10,-4); // um
    float deltaRP = 0.0152 * pow(10,-4);
    float Cp = Q / (sqrt(2*PI) * deltaRP);

    float x = sqrt(-2*pow(deltaRP,2) * log(Cx/Cp)) + Rp; 

    printf(" the junction depth is %E\n ", x);
}