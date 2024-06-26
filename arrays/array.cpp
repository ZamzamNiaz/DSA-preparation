#include <iostream>
using namespace std;

int main() {
    int array[100] = {1};  // First element is 1, the rest are 0
    
    // Print the array to verify
    for (int i = 0; i < 100; ++i) {
    cout << "array[" << i << "] = " << array[i] <<endl;
    }

    return 0;
}

