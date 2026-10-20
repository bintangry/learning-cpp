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
    // \\ untuk memunculkan garis miring "\"

    // sama juga ada \n (untuk buat line baruh dibawahnya) dan \t (untuk kasih spacing yang panjang antara kata, sebenernya katak tab)
    

    // USER INPUT STRING
    // dibagian sini kita belajar cara masukkin beberapa kata itu ga cukup hanya memakai 'cin' doang, karena nanti yang keambil hanyalah kata awal
    cout << "Type your full name: ";
    cin >> fullName; // Bintang Arya Pradipta
    cout<< "Your full name is: " << fullName; // it'll just make the first word which is 'Bintang'

    // The correct ways to do it is using 'getLine' function
    cout << "Type your full name: ";
    getline(cin, fullName); // Bintang Arya Pradipta
    cout << "Your full name is: " << fullName; // use just a normal '<<'


    //Omitting Namespace
    // disini dikasih tahu sebenernya kita bisa tanpa memakai line 'using namespace std;' di bagian header kode tapi akan lebih ribet
    //Contoh
    #include <iostream>
    #include <string>

    int main();{

        std::string greeting = "Hello World!";
        cout << greeting; // jadi lebih ribet aja
        return 0;
    }

    // C-style String
    // Ini cara bahasa C untuk mendeclare sebuah string kayak di cpp

    string greeting1 = "Hello";
    char greeting2[] = "Jello";

    // dan juga untuk menampilkan hasil nya tetep sama memakai 'cout'

    return 0;
}