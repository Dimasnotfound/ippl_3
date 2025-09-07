#include <iostream>
#include <vector>

void testFeatureCombination(bool featureA, bool featureB, bool featureC) 
{
    if (featureA) std::cout << "Testing Feature A\n";
    if (featureB) std::cout << "Testing Feature B\n";
    if (featureC) std::cout << "Testing Feature C\n";
}

int main() {
    std::vector<std::vector<bool>> featureCombinations = {
        {true, true, false},
        {true, false, true},
        {false, true, true},
        {true, true, true}
    };

    for (const auto& combination : featureCombinations) { testFeatureCombination(combination[0], combination[1], combination[2]);
    }

    return 0;
}
