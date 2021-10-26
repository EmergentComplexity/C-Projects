// This code plots a function to the console
#include <iostream>
using namespace std;





int f(int x) {
    x = x-4;
    int y = x*x; // plot y = x^2
    return y;
}

int main()
{
    
    
    int array2D [10][10];
 
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
             
             if ( i == f(j)) {
                array2D[i][j] = 1; 
             }
             else {
                 array2D[i][j] = 0;
             }
        }
    }
    
    for(int i = 9; i >= 0; i--) {
        for(int j = 0; j < 10; j++) {
            
            if (array2D[i][j] == 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
            cout  << " ";
        }
        cout << "\n";
    }

    return 0;
}
