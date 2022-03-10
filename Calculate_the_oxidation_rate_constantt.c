

/*


Peter sanchez
2/7/2022
TThis script does produce the correct answer to the question:

Calculate the oxidation rate constant indicated below using the parameters listed below.  

Calculate: B (μm2/hr)
Silicon Orientation: (100)
Oxidation Type: Dry, O2
Temperature = 1,078 (°C)

*/
#include <stdio.h>
#include <math.h>

int main()
{
    long double e = 2.71828182846;
    
    // for Si oxidized dry
    long double E1 = 1.23; //eV
    long double C1 = 772.0; // μ^2/hr
    long double k = 8.617333262145 * powl(10,-5); //Boltzmann Constant ev
    long double T = 1078 + 273.15; // temp
    
    long double exp = -E1/(k * T);
    long double B = C1 * powl(e,exp);// rate constant B
   
    printf("B = %Le\n", B);

    return 0;
}
