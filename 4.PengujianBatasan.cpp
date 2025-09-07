#include <iostream>
#include <cassert>

enum class Status { Success, Failure };

Status checkRange(int value) {
    if (value < 1 || value > 100) return Status::Failure;
    return Status::Success;
}

void testCheckRange() {
    // Batas bawah dan atas
    assert(checkRange(1) == Status::Success); 
    assert(checkRange(100) == Status::Success);
    // Di luar batas
    assert(checkRange(0) == Status::Failure); 
    assert(checkRange(101) == Status::Failure); 
    std::cout << "Semua uji batas lulus!" << std::endl;
}

int main() { 
    testCheckRange();
    return 0;
}


