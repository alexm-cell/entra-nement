#include <iostream>
using namespace std;


void lespairs(int k) {

    if (k < 0) {
        return;
    }

   
    if (k % 2 == 0) {
        cout << k << " "; 
    }

   
    lespairs(k - 1);
}

int main() {
    int x = 7; 

    cout << "Les chiffres pairs de " << x << " à 0 sont : ";
    lespairs(x);
    cout << endl;

    int y = 13; 
    cout << "Les chiffres pairs de " << y << " à 0 sont : ";
    lespairs(y);
    cout << endl;

    return 0;
}
