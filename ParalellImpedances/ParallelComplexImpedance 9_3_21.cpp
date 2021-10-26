#include <cstddef>
#include <iostream>
#include <math.h>
//int simplify_list(Component * C);
using namespace std;


// a complex number = a + ib
 struct complexNumber {
    
        float real;            // the real part of the complex number: a 
        float imaginary;       // the imaginary part: i
};


// compute Z1/Z2
 struct complexNumber complexDivision( struct complexNumber Z1,struct complexNumber Z2) {
    struct complexNumber ZQuotient;
    ZQuotient.real = ( (  (Z1.real * Z2.real) + (Z1.imaginary * Z2.imaginary)   )/(   (Z2.real * Z2.real) + (Z2.imaginary * Z2.imaginary)    ) );

    ZQuotient.imaginary = (  ( (Z1.real * Z2.imaginary) - (Z1.imaginary * Z2.real) ) / (   (Z2.real * Z2.real) + (Z2.imaginary * Z2.imaginary)  )  );

    
    cout << "\n Z1 = " << Z1.real << " + " << Z1.imaginary << "i";
    cout << "\n Z2 = " << Z2.real << " + " << Z2.imaginary << "i";
    
    
    cout << "\n Z2 = " << ZQuotient.real << " " << ZQuotient.imaginary;
    return ZQuotient;
}


//add
struct complexNumber complexAddition( struct complexNumber Z1,struct complexNumber Z2) {
    struct complexNumber ZSum;
    ZSum.real = Z1.real + Z2.real;
    ZSum.imaginary = Z1.imaginary + Z2.imaginary;
    return ZSum;
}

// parallelCombination
 struct complexNumber parallelImpedances (struct complexNumber Z1,struct complexNumber Z2) {
    //parallelCombination = (1/( (1/R1) + (1/R2) ));
    struct complexNumber one;
    one.real = 1;
    one.imaginary = 0;
    
   struct complexNumber Zeq;
    Zeq = complexDivision(one, (complexAddition((complexDivision(one, Z1)),(complexDivision(one, Z2)))));
    return Zeq;
    
}


int main() {
    struct complexNumber parallelCombination;
    struct complexNumber R1;
    struct complexNumber R2;
    
    cout << "\n Enter R1.real = ";
    cin >> R1.real;
    cout << "\n Enter R1.imaginary = ";
    cin >> R1.imaginary;
    
     cout << "\n Enter R2.real = ";
    cin >> R2.real;
    cout << "\n Enter R2.imaginary = ";
    cin >> R2.imaginary;
    
   //  parallelCombination.real = 9;
    parallelCombination = parallelImpedances(R1, R2);
    
    cout << "\n parallelCombination.real = " << parallelCombination.real;
    cout << "\n parallelCombination.imaginary = " << parallelCombination.imaginary;
    return 0;
}