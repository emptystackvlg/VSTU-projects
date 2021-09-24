#include <iostream>
using namespace std; 
int main()
{
    setlocale(LC_ALL, "rus"); 
    float a ,b, c; 
    float max, min; 
    cout << "\n Введите a \n> ";
    cin >> a; 
    cout << "\n Введите b \n> ";
    cin >> b;
    cout << "\n Введите c \n> ";
    cin >> c;
    min = (a + b + c) / 3;
    max = 2 * (a * b * c); 

    if (a >= b && a >= c) {
        a = max;
        cout << "\n a - наибольшее число \n"; 
        if (b <= c) {
            b = min;
            cout << "\n b - наименьшее число \n";
        }
        else {
            c = min ;
            cout << "\n c - наименьшее число \n";
        }
    }
    else {
        if (b >= a && b >= c) {
            b = max; 
            cout << "\n b - наибольшее число \n";

            if (a <= c) {
                a = min;
                cout << "\n a - наименьшее число \n";
            }
            else {
                c = min; 
                cout << "\n c - наименьшее число \n ";
            }
        }
        else{
            c = max;
            cout << "\n c - наибольшее число \n";
            if (a <= b) {
                a = min;
                cout << "\n a - наименьшее число \n";
            }
            else {
                b = min;
                cout << "\n b - наименьшее число \n";
            }
        }
    }
    cout <<"\na = " << a << "\nb = " << b << "\nc = " << c << "\n";
    return 0; 
}

