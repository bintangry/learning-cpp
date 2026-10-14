#include <iostream>
using namespace std;


int main() {

    // // operator are used to perform operations on variables and values.
    // int x = 100 + 50;
    // int y = 50;
    // int z = y + x;
    // int e = z + 50;

    // // there are types of operator:
    // // Arithmetic operators
    // // Assignment operators
    // // Comparison operators
    // // Logical operators
    // // Bitwise operators

    // //Arithmetic operators
    // // +, -, *, /, %(sisa dari pembagian), ++ (Tambah angka +1), --(Kurang angka -1)

    // //Example
    // int x = 10;
    // int y = 5;

    // cout << x + y << "/n"; //15
    // cout << x - y << "/n"; //5
    // cout << x * y << "/n"; //50
    // cout << x/y << "/n"; //2
    // cout << x%y << "/n"; //5
    
    // int z = 7;
    // cout << z++ << "/n"; //8
    // cout << z-- << "/n"; //7

    // // Note: When dividing two integers in C++, the result will also be an integer. 
    // // For example, 10 / 3 gives 3. If you want a decimal result, use float or double values, like 10.0 / 3

    // int g = 10;
    // int u = 3;

    // cout << g/u; // result is 3

    // float y = 10.0;
    // float r = 3.0;
    
    // cout << y/r; // result is 3.33
    
    // // Incrementing and Decrementing: working with counters, loops, and arrays
    // // Real-Life Example
    
    // int PeopleinRoom= 0;

    // PeopleinRoom++;
    // PeopleinRoom++;
    // PeopleinRoom++;

    // cout << PeopleinRoom;
    
    // PeopleinRoom--;
    // cout << PeopleinRoom;

    // //ASSIGNMENT (used to assign values to variables/ ya intinya ini nambahin equation juga tapi dengan sama dengan)
    // int x = 10;
    // x += 5;

    // // List of assignment
    // // =, +=, -=, *=, /=, %=, &= (dan), |=(batas), ^=(pangkat), >>=(lebih dari), <<=(kurang dari), != (tidak sama dengan)

    // int y = 4;
    // y *= 6;

    // //Real life Example
    // int savings = 67;
    // savings *= 7;

    // cout << "Total saving" << savings;

    //Comparison (used to compare two values (or variables)

    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3

    //list of comparison operator
    // ==, !=, >, <, >=, <=

    //Real-Life Example

    int age = 18;

    cout << (age >= 18); // answer will be true
    cout << (age > 18); // answer will be false

    int passwordlength = 20;

    cout << (passwordlength != 20); // answer will be false
    cout << (passwordlength == 20); // answer will be true

    
    //LOGICAL( used to determine the logic between variables or values)
    // &&(Logical and/harus dua statement baru menciptakan 'true'), 
    //||(Logical or/cukup salah satu statement antara 2 garis itu bakal ngasilin true), 
    //!(Logical not/kembalikan dari hasil aslinya)
    
    // Example
    int x = 5;
    int y = 8;
    // cout << (y > x && 10 > y); // will make true
    // cout << (y > x || 8  > y); // will still true because one of them which is y > x is true
    //    cout << !(y > x && 10 > y); // just reverse the result, and the answer that should be true becomes false
    
    // Operator presendence (Ini ibaratnya kalo diperhitungan, mana dulu yang di eksekusi, kalo di math kita tahu itu tanda kurung atau kali dan bagi)

    // urutan order of operations - dari highest to lowest priority:
    // () - Parentheses
    // *, /, % - Multiplication, Division, Modulus
    // +, - - Addition, Subtraction
    // >, <, >=, <= - Comparison
    // ==, != - Equality
    // && - Logical AND
    // || - Logical OR
    // = - Assignment

    // CODE CHALLENGE
//     #include <iostream>
//     using namespace std;

//     int main() {
//   // Write itemPrice here
// 	int itemPrice =  20;
	
//   // Write shippingCost here
// 	int shippingCost =  5;

//   // Write sum here (itemPrice + shippingCost)
// 	int sum= itemPrice + shippingCost;

//   // Print sum here
// 	cout << sum;

//   return 0;
// }

// EVALUASI:
// Bukan make titik dua untuk assign value, tapi memakai '='

    return 0;
}
    

    

    