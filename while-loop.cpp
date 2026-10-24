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
    
    return 0;
}