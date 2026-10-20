#include <iostream>
using namespace std;

int main () {
    // sometimes in cpp you'll need a answer of just 2 condition
    // YES/NO, TRUE/FALSE, ON/OFF

    // For this, C++ has a bool data type, which can take the values true (1) or false (0).

    //Boolean Values
    bool isCodingFun =  true;
    bool isFishTasty = false;

    cout << isCodingFun << "\n"; // output will be 1
    cout << isFishTasty << "\n"; // output will be 0

    //If you prefer to print true and false as words instead of 1 and 0
    // pake tambahan cout << boolaplha;

    bool isBintangHandsome = true;
    bool isRapipHandsome = false;

    cout << boolalpha;

    cout << isBintangHandsome;
    cout << isRapipHandsome;

    // boolalpha is not a data type. It is an I/O manipulator - a setting that changes how cout displays boolean values. 
    // When you use it, you are telling cout: "From now on, print booleans as true and false instead of 1 and 0."

    //cara reset jika mau balik lagi memakai 1 dan 0 itu memakai cout <<noboolaplha

    cout << noboolalpha;
    cout << isBintangHandsome;
    cout << isRapipHandsome;

    //BOOLEAN EXPRESSION
    // A Boolean expression is a piece 
    // of code that compares values or variables and returns a boolean value: 1 (true) or 0 (false).

    // You can use a comparison operator, 
    // such as the greater than (>) operator, to find out if an expression (or variable) is true or false:

    int x = 10;
    int y = 2;

    cout << (x > y); // The output will be 1

    // or even easier
    cout << (10 > 6);


    cout << (10 == x); // the aswer will be 1

    // and you can also store the result in boolean variable

    bool isGreater = x > y;

    cout << isGreater;

    // Real Life Example: Buat Bank

    cout << "How old are you? ";
    int myAge = 19;
    int minimumAge = 18;

    bool (myAge >= minimumAge); // it will be 1 cause it's true

    if(myAge >= minimumAge){
        cout << "You are allowed!";
    }
    else {
        cout << "You aren't allowed to make a bank!";
    }


    return 0;
}