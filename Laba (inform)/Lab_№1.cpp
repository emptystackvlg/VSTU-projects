#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x ; 
    float a ; 
    float y ;
    cout << "Введите x \n> " ;
    cin >> x ;
    system ("clear") ;
    cout << "Введите a \n > " ; 
    cin >> a ; 
    system ("clear") ; 
    
    if (x>=0){
        float b ; 
        cout << "Введите b \n> ";
        cin >> b ;
        system ("clear");
        y = 1/tan (x/(a+b)) ;
    }
    else {
        y = 2 * sin (2*x +a);
    }
    
    cout << "y = " << y ;
    
    return 0;
}
