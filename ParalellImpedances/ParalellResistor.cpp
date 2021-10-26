#include <cstddef>
#include <iostream>
//int simplify_list(Component * C);
using namespace std;

int main() {
    float parallelCombination = 0;
    float R1 = 0;
    float R2 = 0;
    
    cout << "\n Enter R1 = ";
    cin >> R1;
    cout << "\n Enter R2 = ";
    cin >> R2;
     
    parallelCombination = (1/( (1/R1) + (1/R2) ));
    
    cout << "\n parallelCombination = " << parallelCombination;
    return 0;
}