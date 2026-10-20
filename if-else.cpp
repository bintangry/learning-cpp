#include <iostream>
using namespace std;

int main() {

    // cpp has the following conditional statements:
    // if, else, else if, switch (to specify many alternative blocks of code to be executed)
    if (20 > 18) {
        cout << " 20 is greater than 18";
    }
    int x = 20;
    int y = 18;

    if (x > y) {
        cout << " x is greater than y";

    }
        // In the example above, we use two variables, x and y, to test whether x is greater than y. Because 20 is greater than 18, the condition is true, 
        // and the message is printed.

        //Using Boolean Variable
        int u = 27;
        int o = 34;

        bool isGreater = u > o;

        if (isGreater) { 
            cout << "u is greater o";
        }

        //else // Use the else statement to specify a block of code to be executed if the condition is false.
        int time = 20;

    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    // Outputs "Good evening."


    // using boolean statement
    int time = 20;
    bool isDay = time < 18;
    // JADI HANYA PERLU MEMASUKKAN DATA 'IF'

    if (isDay) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
    // Outputs "Good evening."  


    // else-if
    // Use the else if statement to specify a new condition to test if the first condition is false.
    int time = 16;

    if (time < 12) {
    cout << "Good morning.";
    } else if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }
    // Outputs "Good day."

    // if (condition1) {
    // block of code to be executed if condition1 is true
    // } else if (condition2) {
    // block of code to be executed if condition1 is false and condition2 is true
    //} else {
    // block of code to be executed if both conditions are false}

    // EXPLANATION:
    // The value of time is 16. The first condition (time < 12) is false, but the second condition (time < 18) is true. 
    // Because of this, the code inside the else if block runs, and "Good day." is printed.

    int time = 16;

    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        cout <<"Good Morning";
    }
    else if (isDay) {
        cout << "Good Afternoon";
    }
    else {
        cout << "Good Evening";
    }

    // Short Hand If Else (Ternary Operation)
    // There is also a short-hand if...else, known as the ternary operator because it uses three operands.
    // The ternary operator returns a value based on a condition: if the condition is true, it returns the first value; 
    // otherwise, it returns the second value.
    // It can be used to replace multiple lines of code with a single line, 
    // and is often used to replace simple if...else statements:

    // Syntax 
    // kondisi ? hasil_jika_benar : hasil_jika_salah;

    int time = 20;
    string result =(time < 18) ? "Good Morning!":"Good Evening.";
    cout << result;

    int waktu = 20;
    cout << ((time < 18)? "Good day": "Good evening");

    // NESTED TERNARY (UNTUK MEMPERSINGKAT KONFDISI IF-ELSE )
    int time = 30;
    string message = (time < 12) ? "Good Morning"
        : (time < 18)? "Good Afternoon"
        : "Good Evening";
    cout << message;


    // Nested If
    // You can also place an if statement inside another if. This is called a nested if statement.
    // Itu terjadi kalo misalkan kondisi pertama true, maka lanjut ke-if selanjutnya

    int x = 15;
    int y = 20;

    if (x > 10) {
        cout << " x is greater than 10\n";
        // nested if
        if (y > 5) {
            cout << "y is greater than 5\n";
        }

    }

    // Real Life Example
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        cout << "Great! are you a citizen? \n";

        if (isCitizen) {
            cout << "Great! you allowed to vote?\n";
        }
        else {
            cout << "You can't vote, because you must be a citizen.\n";
        }
    }
    else {
        cout << "You are not old enough to vote.\n";
    }

    // NOTE
    //You can nest as many if statements as you want, but avoid making the code too deep - it can become hard to read.
    // Nested if is often used together with else and else if for more complex decision making.

    return 0;
}