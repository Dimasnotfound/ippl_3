#include <iostream>
#include <cassert>

enum class Status { Success, Failure };

Status processValue(int value) {
    if (value < 0) return Status::Failure; // Kelas equivalence: Negatif
    if (value == 0) return Status::Success; // Kelas equivalence: Nol
    return Status::Success; // Kelas equivalence: Positif
}
void testProcessValue() {
    // Kelas equivalence: Negatif, Nol, Positif
    assert(processValue(-5) == Status::Failure); 
    assert(processValue(0) == Status::Success); 
    assert(processValue(10) == Status::Success);
    std::cout << "Semua tes kelas equivalence lulus!!" << std::endl;
}

int main() { 
    testProcessValue(); 
    return 0; 
}

