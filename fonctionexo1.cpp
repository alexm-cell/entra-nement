#include <iostream>

void somme(int a, int b, int &resultat) {
    resultat = a + b; 
}

int main() {
    int a = 5;
    int b = 3;
    int resultat;

    somme(a, b, resultat); 

    std::cout << "La somme de " << a << " et " << b << " est " << resultat << std::endl; 
    return 0;
}

// Déclarer la fonction au dessus du main et le corps en dessous du main

#include <iostream>


void somme(int a, int b, int &resultat);

int main() {
    int a = 5;
    int b = 3;
    int resultat;

    somme(a, b, resultat); 

    std::cout << "La somme de " << a << " et " << b << " est " << resultat << std::endl; 
    return 0;
}


void somme(int a, int b, int &resultat) {
    resultat = a + b; 
}

// créer une fonction avec void qui renvoie pair ou impair