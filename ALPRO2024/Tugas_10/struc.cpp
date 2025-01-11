#include <iostream>
using namespace std;

struct Mahasiswa {
    char nama[25];
    char npm[10];
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    
    for(int i = 0; i < 5; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "Masukkan nama : "; cin >> mhs[i].nama;
        cout << "Masukkan NPM : "; cin >> mhs[i].npm;
        cout << "Masukkan IPK : "; cin >> mhs[i].ipk;
    }
    
    cout << "\n****OUTPUT****" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "NPM  : " << mhs[i].npm << endl;
        cout << "IPK  : " << mhs[i].ipk << endl;
    }
    
    return 0;
}
