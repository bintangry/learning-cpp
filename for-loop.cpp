#include <iostream>

int main() {
    // Nested loop is a loop that is inside of another loop
    // The "inner loop" will be executed one time for each iteration of the "outer loop":

    // Outer Loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer:" << i << "\n";

        // Inner Loop
        for (int j = 1; j <= 3; ++i){
            cout << "Inner:" << j << "\n";
        }
    }
    return 0;
}