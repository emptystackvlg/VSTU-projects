#include <iostream>

using namespace std ;

int main () {

    bool L,A,B,C ;
    A = true;
    B = false ;
    C = true ;
    L = (!(A==(!B))&& C)||(B&&B);

    cout << L ;
    return 0 ;
}
