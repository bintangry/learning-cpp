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

    } while (i < 5);

    // Condition is false from the start
    
    
    return 0;
}