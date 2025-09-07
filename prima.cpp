#include <iostream>
#include <cassert>
#include <cmath>

// Fungsi untuk memeriksa apakah sebuah bilangan adalah bilangan prima (metode 6k ± 1)
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Fungsi untuk menguji fungsi `isPrime`
void testIsPrime() {
    assert(isPrime(2)  == true);
    assert(isPrime(3)  == true);
    assert(isPrime(4)  == false);
    assert(isPrime(5)  == true);
    assert(isPrime(10) == false);
    assert(isPrime(13) == true);

    std::cout << "Semua uji prima lulus!" << std::endl;
}

int main() {
    testIsPrime();
    return 0;
}
