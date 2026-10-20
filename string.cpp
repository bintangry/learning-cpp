#include <iostream>
#include <string>
using namespace std;

int main(){

    // Include the string library
    // #include <string>

    // Create a string variable
    // string greeting = "Hello";

    // Print the string
    // cout << greeting;

    // STRING CONCTRITAION - it's basically just a combination of two string
    string firstName= "Bintang";
    string middleName= " Arya";
    string lastName= " Pradipta";

    string fullName = firstName + middleName + lastName;
    string fullNameKebalik = lastName + middleName + " " + firstName;

    cout << fullName;
    cout << fullNameKebalik;

    //Append ini cara lain untuk menambahkan, dengan cara mengulang yakni 'value1.append(value2)'
    string namaSetengah = firstName.append(middleName);


    // STRING AND INTEGER
    string angka1 = "10";
    string angka2 = "20";
    
    string gabungan = angka1 + angka2; //HASILNYA AKAN MENUNJUKKAN 1020

    //STRING LENGTH(Untuk mengetahui berapa panjang dari suatu string didalam value)
    // function yang digunakan ialah menambahkan suatu '.length' didepan value

    string txt= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "The length of the string is " << txt.length();

    //juga selain length, kita bisa memakai 'size()' dengan fungsi yang juga sama.

    //ACCESS STRING (Kita bisa mengakses karakter/huruf yang ada di string menggunakan '[]')
    string Mystring = "Hello";
     cout << Mystring[0]; // Output H

    // untuk langsung print karakter terakhir
    cout << Mystring[Mystring.length() - 1];

    // setelah itu kalau lu mau mengganti huruf pada sebuah kata bisa memakai cara yang pertama juga
    Mystring[0] = 'J'; // harus memakai petik 1

    // cara lainnya juga bisa kita menggunakan .at
    cout << Mystring.at(0);
    cout << Mystring.at(Mystring.length() - 1);
    // untuk at selalu setelahnya memakai ()

    // untuk mengganti karakter menggunakan at()
    Mystring.at(0) = 'L';

    //SPECIAL CHARACTER
    // karena string itu membaca dari tanda kutip, jadinya kalau kita memang mau memasukkan kalimat yang ada tanda kutipnya
    // itu memakai spesial karakter berupa \' \' untuk memunculkan ' 
    // \" \" untuk memunculkan "
    // \\ untuk memunculkan \

    // sama juga ada \n (untuk buat line baruh dibawahnya) dan \t (untuk kasih spacing yang panjang antara kata, sebenernya katak tab)
    

    // USER INPUT STRING
    // dibagian sini kita belajar cara masukkin beberapa kata itu ga cukup hanya memakai 'cin' doang, karena nanti yang keambil hanyalah kata awal
    

    return 0;
}