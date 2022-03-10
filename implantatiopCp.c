
/*
	
An implantation is performed into a lightly doped p-type silicon substrate. Calculate the peak electron electron concentration in units of (cm-3) assuming no channeling, complete electrical activation and the parameter given below:

Dopant atom: Phorphorus
Dose: Q = 69 × 1014 (cm-2)
Energy: E = 50 (KeV)

Answer: 1.0E21
*/

#include <math.h>
#include <stdio.h>

#define PI 3.14159265359
 
int main () {
    double Cx = pow(10,15);
    double Q = (69 * pow(10,14));
    double deltaRP = 0.0275 * pow(10,-4); // um

    double Cp =( Q / (sqrt(2*PI) *deltaRP ));
    printf(" tthe peak electron electron concentration is %E ", Cp);
}