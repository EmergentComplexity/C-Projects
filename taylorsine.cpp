#include <cstddef>
#include <iostream>
//int simplify_list(Component * C);
using namespace std;

long long factorial(int x) {
    long long factorial = 1;
    int i;
    for(i = x; i > 0; i--) {
        factorial = factorial * i;
    }
    return factorial;
}

// pow function, but with integers. used for changing the place value of a number
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
double sine(float angle) {
    
    double sine = 0;
    int odd = 1;
    int i= 0;
    cout << angle;
    while ( i < 10) {
        
        
        odd = (2 * i + 1);
        sine = sine + double( (   intpow(-1, i) * power(angle,odd ) )  / double(factorial(odd))     );
        cout << "\n = " << factorial(odd);
        i++;
        
    }
    
    return sine;
}

int main() {
    float parallelCombination = 0;
    float R1 = 1.571;
    float R2 = 0;
    
   // cout << "\n Enter R1 = ";
   // cin >> R1;
    
     
    //parallelCombination = (1/( (1/R1) + (1/R2) ));
    
    cout << "\n parallelCombination = " << sine(3.145926);
    return 0;
}