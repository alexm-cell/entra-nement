#include <iostream>


void pairOuImpair(int nombre);

int main() {
    int nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

    pairOuImpair(nombre); 

    return 0;
}


void pairOuImpair(int nombre) {
    if (nombre % 2 == 0) {
        std::cout << nombre << " est pair." << std::endl;
    } else {
        std::cout << nombre << " est impair." << std::endl;
    }
}

#include <iostream>

void afficherIntervalle(int x, int y);

int main() {
    int x, y;

    
    std::cout << "Entrez la valeur de x: ";
    std::cin >> x;

    std::cout << "Entrez la valeur de y: ";
    std::cin >> y;

   
    afficherIntervalle(x, y);

    return 0;
}


void afficherIntervalle(int x, int y) {
   
    int min = (x < y) ? x : y;
    int max = (x > y) ? x : y;

   
    for (int i = min; i <= max; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
