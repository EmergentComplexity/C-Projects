/*
	
	
A dopant is implanted into a p-type silicon wafer and then annealed according to the parameters given below. Calculate the peak concentration in units of (cm-3) assuming no channeling and complete dopant activation.

Dopant: Phosphorus
Dose: Q = 28 × 1014 (cm-2)
Energy: E = 50 (KeV)
Anneal temperature: T = 1345 (K)
Anneal time: t = 53 (min)
Substrate initial doping: NA = 1015 (cm-3)

Answer: 5.0E19
*/

#include <math.h>
#include <stdio.h>

#define PI 3.14159265359
 
int main () {
    
    //Intrinsic Dopant diffusion coefficients -- (intrinsic because ni is high at process temp)
    float Do = 4.70; // cm^2/sec
    float Ea = 3.68; // eV
    float k = 8.617333262145 * powl(10,-5); //Boltzmann Constant ev
    double Cx = pow(10,15);
    double Q = (28 * pow(10,14));
    double deltaRP = 0.0275 * pow(10,-4); // um
    double Rp = 0.0717 * pow(10,-4); 
    
    
   
    
    
    float T = 1345; // K
    float t = 53 *60; // minutes
    
    
    float D = Do*exp(-Ea/(k*T));

    double Cp =( Q / (sqrt(2*PI) *sqrt(2*D*t) ));
    printf(" tthe peak electron electron concentration is %E ", Cp);
}






