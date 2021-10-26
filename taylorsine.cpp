// implementation of the sine function as a taylor series. 
// This code works but the factorial expression makes it difficult to achieve precision
// this is because the factorial overflows the data types and has bad time complexity




#include <cstddef>
#include <iostream>
#define PI 3.145926
using namespace std;


// factorial implementation as a loop, requires a very large integer 
long long factorial(int x) {
    long long factorial = 1;
    int i;
    for(i = x; i > 0; i--) {
        factorial = factorial * i;
    }
    return factorial;
}

// My implementation of a power function.
float power(float base, int exponent) {
    int i;
    float power = 1;
    for (i = 0; i < exponent; i++) {
        power = power * base;
    }
  return power;
}


// pow function, but with integers. used for changing the place value of a number
int intpow(int base, int exponent) {
    int i;
    int power = 1;
    for (i = 0; i < exponent; i++) {
        power = power * base;
    }
  return power;
}

const int PRECISION = 10;

// implementation of the sine function as a taylor series. 
double sine(float angle) {
    
    double sine = 0;
    int odd = 1;
    int i= 0;
    //cout << angle;
    while ( i < 10) {
        
        
        odd = (2 * i + 1);
        sine = sine + double( (   intpow(-1, i) * power(angle,odd ) )  / double(factorial(odd))     );
        //cout << "\n = " << factorial(odd);
        i++;
        
    }
    
    return sine;
}

int main() {
    float deg;
    cout << "Enter an angle in degrees: ";
    cin >> deg;
    float sineOfAngle = sine((PI/180) * deg);
    cout << "\n sin(" << deg << ") = " << sineOfAngle;
    
    float roundedSine = (float)((int)(sineOfAngle*100))/100;
    cout << "\n" << " Rounded Sin("<<deg<<") = "<< roundedSine;
    return 0;
}
