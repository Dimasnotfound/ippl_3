#include <iostream>
void process(int x) {
    if (x > 0) {
        std::cout << "Bilangan Positif\n";
        if (x % 2 == 0) {
        std::cout << "Bilangan Genap\n";
    } 
    else {
        std::cout << "Bilangan Ganjil\n";
    }
    } 
    else {
        std::cout << "Bilangan Non-positif\n";
    }
}

int main() {
    // Menguji semua jalur process(10); // Positif dan genap
    process(7);  // Positif dan ganil process(-5); // Non-positive
    return 0;
}


3.P
