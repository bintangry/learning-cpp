#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    int myNum = 15;
    cout << myNum;

    int myNum2;
    myNum2 = 100 ;
    cout << myNum2 << endl;

    int myNum3 = 16;
    myNum3 = 10;
    cout << myNum3 << endl;

    double myNum4 = 3.99;
    cout << myNum4 << endl;

    char myNum5 = 'P';
    cout << myNum5 << endl;

    string myText = "Hallo Anak-anak Engineer!";
    cout << myText << endl;
   
    bool myBoolean = true;

    // Buat Kalimat
    string nama = "Bintang";
    int umur = 19;
    double tinggi = 170.7;

    cout << "Halo Perkenalkan Nama saya " << nama << ", umur saya" << umur << " tinggi saya " << tinggi;
    

    int x = 5;
    int y = 6;
    int sum = x + y;

    cout << sum << endl;

    int x = 5, y =7, z= 8;

    cout << x + y + z;

    int x = y = z = 50;
    cout << x + y + z << "\n";

    //indentifiers
    // All C++ variables must be identified with unique names.
    // These unique names are called identifiers.

    int m = 60; // OK, but not so easy to understand what m actually is
    int MinutesperHour = 60; // good

    // Contants
    // When you do not want others (or yourself) to change existing variable values, 
    // use the const keyword (this will declare the variable as "constant", 
    // which means unchangeable and read-only):

    const int number = 93;

    // ga bisa di buat terpisah dengan valuenya
    // const int umur;
    // umur = 19;

    // Real Life Examples
    const int studentID = 290261;
    int studentAge = 19;
    double studentFee = 70.56;
    char studentGrade = 'A';

    cout << "Saya Bintang dengan nim " << studentID << ", saya berumur " << studentAge << "Fee saya " << studentFee << "Nilai saya" << studentGrade; 

    return 0;
}