#include <iostream>
using namespace std;

int main() {
    // int myNum = 1;
    // double myNum2 = 20.3;
    // float myNum3 = 34.10;
    // string Name = "Bintang";
    // char Grade = 'A';
    // bool myBoolean = true;

    // scientific number
    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    // float f1 = 35e3;
    // double input2 = 21u;

    // cout << f1;
    // cout <<input2;

    // Boolean Types
    // When the value is returned, true = 1 and false = 0.

    // bool isCodingFun = true;
    // bool isFishTasty = false;
    // cout << isCodingFun; // Outputs 1
    // cout << isFishTasty; // Output 0


    //Character Type
    // The char data type is used to store a single character. 
    //The character must be surrounded by single quotes, like 'A' or 'c':

    // char myGrade = 'B';
    // cout << myGrade;

    // char russia = 20, mexico = 23, indonesia = 29;
    // cout << russia;
    // cout << mexico;
    // cout << indonesia;

    // String Datatype
    // The string type is used to store a sequence of characters (text). 
    // This is not a built-in type, but it behaves like one in its most basic usage. 
    // String values must be surrounded by double quotes:

    // string greeting = "hello";
    // cout << greeting;

    // To use strings, you must include an additional header file in the source code, the <string> library:

    // Auto Keyword
    // The auto keyword automatically detects the type of a variable based on the value you assign to it.
    // It helps you write cleaner code and avoid repeating types, especially for long or complex types.

    // auto myNum = 5;
    // auto myFloatNum = 5.99f;
    // auto myDoubleNum = 3.56;
    // auto myLetter = 'D';
    // auto myBoolean = true;
    // auto myString = 'Hello!';

    // Note 
    // auto only works when you assign a value at the same time (You can't declare auto x; without assigning a value)
    // Once the type is chosen, it stays the same. See example below:

    // auto x = 5; // x is now an int
    // x = 10;     // OK - still an int
    // x = 9.99;   // Error - can't assign a double to an int

    //Real-Life Example
    int item = 30;
    double price = 9.99;
    double total_price = item * price;
    char currency = '$';

    cout << "Item: " << item << "\n" ;
    cout << "Price each item: " << price << currency << "\n";
    cout << "Total Price: " << total_price << currency; 


    return 0;

}