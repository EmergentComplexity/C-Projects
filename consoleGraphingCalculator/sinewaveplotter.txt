
#include <iostream>
using namespace std;
#include <math.h> 




int f(int x) {
    x = x-4;
    int y = x*x;
    return y;
}

int main()
{
    
    
    int array2D [100][100];
 
    
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
             //cout << (int)(10 *sin(j) + 50) << "\n";
             if ( i ==  (int)((10 * sin(0.50 *j) + 50)))  {
                 
                array2D[i][j] = 1; 
             }
             
           
             else {
                 array2D[i][j] = 0;
             }
        }
    }
    
    for(int i = 99; i >= 0; i--) {
        for(int j = 0; j < 100; j++) {
            
            if (array2D[i][j] == 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
            //cout  << " ";
        }
        cout << "\n";
    }

    return 0;
}
