#include <iostream>
using namespace std; 
int main()
{
    setlocale(LC_ALL,"rus");
    float  m , n ,result;
    int integer_part; 
    cout << "\nВведите m \n> ";
    cin >> m; 
    cout << "\nВведите n \n> ";
    cin >> n;
    if (n == 0) {
        cout << "\nОшибка , знаменатель равен нулю\n";
        system("pause");
        return 0;
    }
    else {
        result = m / n;
        integer_part = m / n;
        result -= integer_part;
        if (result > 0.5) {
            m *= 2;
            cout << "\nЧисло m было удвоено \n";
        }
        else {
            n *= 2;
            cout << "\nЧисло n было удвоено \n";
        }
        cout << "\nm = " << m << "\nn = " << n << "\n";
    } 
    
    system("pause"); 
    return 0; 
}

