#include <iostream>
#include <cassert>
#include <stdexcept>

// Fungsi untuk menghitung faktorial
int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Input negatif tidak diperbolehkan");
    }
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Fungsi untuk menguji fungsi `factorial`
void testFactorial() {
    // Kasus dasar
    assert(factorial(0) == 1);  // 0! = 1

    // Beberapa nilai kecil
    assert(factorial(1) == 1);  // 1! = 1
    assert(factorial(2) == 2);  // 2! = 2
    assert(factorial(3) == 6);  // 3! = 6
    assert(factorial(4) == 24); // 4! = 24

    // Uji input negatif harus melempar exception
    try {
        (void)factorial(-1);
        assert(false); // Tidak boleh sampai sini
    } catch (const std::invalid_argument&) {
        // OK
    }

    std::cout << "Semua uji faktorial lulus!" << std::endl;
}

int main() {
    testFactorial();
    return 0;
}
