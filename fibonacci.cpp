#include <iostream>
#include <cassert>
#include <stdexcept>

// Fungsi untuk menghitung bilangan Fibonacci
int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("Input negatif tidak diperbolehkan");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Fungsi untuk menguji fungsi `fibonacci`
void testFibonacci() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(4) == 3);
    assert(fibonacci(5) == 5);

    // Uji input negatif harus melempar exception
    try {
        (void)fibonacci(-1);
        assert(false); // Tidak boleh sampai sini
    } catch (const std::invalid_argument&) {
        // OK
    }

    std::cout << "Semua uji Fibonacci lulus!" << std::endl;
}

int main() {
    testFibonacci();
    return 0;
}
