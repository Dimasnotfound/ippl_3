#include <iostream>
#include <cassert>

enum class Status { Pass, Fail };

// Fungsi yang diuji
Status evaluateCombination(int a, bool b) {
    if (a < 0 || a > 10) return Status::Fail;
    if (b && a % 2 == 0) return Status::Pass;
    if (!b && a % 2 != 0) return Status::Pass; 
    return Status::Fail; 
}
void testEvaluateCombination() {
    // Kombinasi yang diuji 
    assert(evaluateCombination(0, true) == Status::Pass);
    assert(evaluateCombination(1, false) == Status::Pass); // a = 1, b = false 
    assert(evaluateCombination(2, false) == Status::Fail); // a = 2, b = false 
    assert(evaluateCombination(3, true) == Status::Fail);  // a = 3, b = true 
    std::cout << "Semua tes kombinatorial lulus!" << std::endl; 
}

int main() { 
    testEvaluateCombination(); 
    return 0;
}

