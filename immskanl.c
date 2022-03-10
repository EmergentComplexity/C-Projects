
/*
A dopant is implanted into a p-type silicon wafer containing an oxide mask and then annealed according to the parameters given below. Calculate the junction depth in units of (cm) assuming no channeling, no segregation, and complete dopant activation.

Dopant: Arsenic
Oxide mask thickness: xm = 0.1 × 10-4 (cm)
Dose: Q = 1 × 1014 (cm-2)
Energy: E = 50 (KeV)
Anneal temperature: T = 1335 (K)
Anneal time: t = 52 (min)
Substrate initial doping: NA = 10^15 (cm-3)

Answer: 2.3E-5

*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main() {
    //Intrinsic Dopant diffusion coefficients -- (intrinsic because ni is high at process temp)
    float Do = 9.17; // cm^2/sec
    float Ea = 3.99; // eV

    // Rp and DeltaRP for As at 50 kev
    float Rp = 0.0362 * pow(10,-4);// ->cm
    float deltaRP = 0.0152 * pow(10,-4);

    float k = 8.617333262145 * powl(10,-5); //Boltzmann Constant ev

    float Q = 1 * pow(10,14); // cm^-2
    float E = 50; //keV
    float T = 1335; // K
    float t = 52 *60; // minutes ->sec

    float C = pow(10,15); //NA
    float Xm = 0.1*pow(10,-4);


    float D = Do*exp(-Ea/(k*T));

    float root = 2*PI*(deltaRP*deltaRP + 2*D*t);
    float ln =(C/(Q/(sqrt(root))));
    float x = sqrt(-log(ln) * (2*(deltaRP*deltaRP + 2*D*t))) + Rp;

    printf(" the junction depth is %E \n", x-Xm);
}