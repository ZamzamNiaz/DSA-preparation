#include <iostream>
#include <vector>
#include <algorithm>  // for std::swap and std::reverse

// Next permutaion

void nextPermutation(std::vector<char>& toys) {
    int n = toys.size();
    int i = n - 2;

    // Step 1: Find the first pair where order breaks
    while (i >= 0 && toys[i] >= toys[i + 1]) {
        i--;
    }

    // If we found a place to make next permutation
    if (i >= 0) {
        // Step 2: Find the smallest toy larger than the broken one
        int j = n - 1;
        while (toys[j] <= toys[i]) {
            j--;
        }

        // Step 3: Swap them
        std::swap(toys[i], toys[j]);
    }

    // Step 4: Reverse the toys after the swapped position
    std::reverse(toys.begin() + i + 1, toys.end());
}

int main() {
    // Your toys
    std::vector<char> toys = {'A', 'B', 'D', 'C'};

    // Find next permutation
    nextPermutation(toys);

    // Print the new order of toys
    for (char toy : toys) {
        std::cout << toy << " ";
    }
    std::cout << std::endl;

    return 0;
}
