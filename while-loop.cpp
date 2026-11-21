#include <iostream>
using namespace std;

int main(){
    // Loop while itu jalan ketika kondisi 'true'
    while true { //(condition)
        // code block to be executed
    }

    int i = 0;
    while (i < 5){
    cout << i << "\n";
    i++;
    }
    //Do you wonder why we use the letter i as a variable name? 
    // It's a counter variable and a common choice in simple loops 
    // because it's short, traditional, and stands for 'index' or 'iterator'.

    //COUNTDOWN EXAMPLE
    int countdown = 3;

    while (countdown > 0){
        cout << countdown << "\n";
        countdown--;
    }

    cout << "Happy New Year";

    //Do-While-Loop
    // The do/while loop is a variant of the while loop. This loop will execute the code block once, 
    // before checking if the condition is true. Then it will repeat the loop as long as the condition is true.

    do{
    }while ();

    //Example: 
    int i = 0;
    do {
        cout << i << "\n";
        i++;
        // Do not forget to increase the variable used in the condition (i++), otherwise the loop will never end!

    } while (i < 5);

    // Condition is false from the start
    // In the example above, the condition i < 5 was true at the beginning,
    // so the loop executed multiple times. But what if the condition is false right from the start?

    int i = 10;
    do {
        cout << "i is" << i << "\n";
        i++;
    } while (i < 5);
    
    // REAL LIFE EXAMPLE
    int countdown = 3;

    while (countdown > 0) {
    cout << countdown << "\n";
    countdown--;
    }

    cout << "Happy New Year!!\n";

    //In this example, we create a program that only print even numbers between 0 and 10 (inclusive):

    int i = 0;

    while (i <= 10) {
    cout << i << "\n";
    i += 2;
    }

    // In this example we use a while loop to reverse some numbers:
    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumbers'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";

    // FOR LOOP

    //When you know exactly how many times you want to loop through a block of code, 
    // use the for loop instead of a while loop:
    //  for (statement 1; statement 2; statement 3) {
    // code block to be executed
    //     }

    //Statement 1 is executed (one time) before the execution of the code block.

    //Statement 2 defines the condition for executing the code block.

    //Statement 3 is executed (every time) after the code block has been executed.


    // Print Numbers
    // untuk mengprint nomor 1-4 secara otomatis

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
    
    // Hasil setelah di run
    // 1
    // 2
    // 3
    // 4

    // Statement 1 sets a variable before the loop starts: int i = 0
    // Statement 2 defines the condition for the loop to run: i < 5. If the condition is true, the loop will start over again, if it is false, the loop will end.
    // Statement 3 increases a value each time the code block in the loop has been executed: i++

    // Print Even Numbers
    for (int = 0; i < 10; i = i + 2) {
        cout << i << "\n";
    }

    // nanti nambahnya genap terus

    // sum of numbers
    return 0;
}