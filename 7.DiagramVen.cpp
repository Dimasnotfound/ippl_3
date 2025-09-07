#include <iostream>
#include <vector>
#include <cassert>
#include <string>

// Fungsi untuk mengklasifikasikan bilangan
std::string classifyNumber(int value) {
    if (value > 0) {
        return (value % 2 == 0) ? "Positif dan Genap" : "Positif dan Ganjil";
    } else if (value < 0) {
        return (value % 2 == 0) ? "Negatif dan Genap" : "Negatif dan Ganjil";
    }
    return "Klasifikasi Tidak Dikenal";
}

void testClassifyNumber() {
    std::vector<int> testValues = {2, 1, -2, -1, 0};
    std::vector<std::string> expectedResults = {
        "Positif dan Genap",
        "Positif dan Ganjil",
        "Negatif dan Genap",
        "Negatif dan Ganjil",
        "Klasifikasi Tidak Dikenal"
    };

    for (size_t i = 0; i < testValues.size(); ++i) {
        assert(classifyNumber(testValues[i]) == expectedResults[i]);
    }
    std::cout << "Semua tes klasifikasi lulus!" << std::endl;
}

int main() {
    testClassifyNumber();
    return 0;
}
