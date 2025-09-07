#include <iostream>
#include <cassert>
#include <vector>
// Fungsi yang diuji

bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false; 
        } 
    }
    return true; 
}

void testIsSorted() {
    std::vector<int> sortedArray = {1, 2, 3, 4, 5};
    std::vector<int> unsortedArray = {5, 3, 1}; 
    assert(isSorted(sortedArray) == true);  // Array sudah terurut 
    assert(isSorted(unsortedArray) == false); // Array tidak terurut 
    std::cout << "Semua tes yang diuji lulus!" << std::endl; 
}


int main() {
    testIsSorted();
    return 0; 
}


