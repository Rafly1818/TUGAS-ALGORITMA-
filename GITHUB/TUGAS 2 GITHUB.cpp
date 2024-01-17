/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void luasPersegi(){
    int a, b;
    float sum;

    cout << "-----Luas Persegi-----" << endl;
    cout << "Rumus Luas Persegi : " << "L = S x S" << endl;
    cout << "Masukkan Panjang Sisi 1 : ";
    cin >> a;
    cout << "Masukkan Panjang Sisi 2 : ";
    cin >> b;
    sum = a*b;
    cout << "Hasil Dari luas Persegi Adalah : " << sum << endl << endl;
}

void luasLingkaran(){
    int x, y;
    float sum;
    
    cout << "-----Luas Lingkaran-----" << endl;
    cout << "Rumus Luas Lingkaran : " << "3,14 x r x r" << endl;
    cout << "Masukkan Jari-Jari Pertama : ";
    cin >> x;
    cout << "Masukkan Jari-Jari Kedua : ";
    cin >> y;
    sum = 3.14 * x * y;
    cout << "Hasil Dari Luas Lingkaran Adalah : " << sum << endl << endl;
}

void luasPersegiPanjang(){
    int c, d;
    float sum;
    
    cout << "-----Luas Persegi Panjang-----" << endl;
    cout << "Rumus Luas Persegi Panjang : " << "L = P x L" << endl;
    cout << "Masukkan Panjang : ";
    cin >> c;
    cout << "Masukkan Lebar : ";
    cin >> d;
    sum = c*d;
    cout << "Hasil Dari Luas Persegi Panjang Adalah : " << sum << endl << endl;
}

int main()
{
    luasPersegi();
    luasLingkaran();
    luasPersegiPanjang();
    return 0;
}

