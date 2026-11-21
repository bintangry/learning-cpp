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

    // Multiplication Table Example
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << "\n";
    }

    // 1 2 3
    // 2 4 6
    // 3 6 9

    // The Foreach Loop
    // Foreach adalah aturan yang menyuruh komputer untuk mengambil dan melihat 
    // semua barang di dalam satu kotak satu per satu dari awal sampai habis, tanpa perlu repot menghitung nomor urutnya

    for (type variableName : arrayName) {
    // code block to be executed
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
        for (int num : myNumbers) {
  cout << num << "\n";
}
    return 0;
}