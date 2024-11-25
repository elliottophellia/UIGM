// include library iostream buat input output which is essential banget
#include <iostream>
// include iomanip library buat formatting yang aesthetically pleasing
#include <iomanip>
// namespace std biar ga perlu nulis std:: everywhere gitu
using namespace std;

// main function yang literally jadi starting point program kita
int main()
{
    // simply cuma print header
    cout << "## Program C++ Matriks 2x2 ##" << endl;
    // print line separator biar cantik dikit
    cout << "===============================" << endl;
    // kasih empty line biar ga cramped
    cout << endl;
    
    // declare matrix 2x2 dan iterator i,j yang we're gonna use later
    int matriks[2][2], i = 0, j = 0;

    // first while loop buat handle rows, literally going through each row
    while (i < 2)
    {
        // reset j ke 0 setiap ganti row, important step nih
        j = 0;
        // nested while loop buat handle columns in each row
        while (j < 2)
        {
            // prompt user buat input value dengan format row+1 dan column+1
            cout << "Baris " << i + 1 << ", kolom " << j + 1 << " = ";
            // store user input ke dalam matrix at current position
            cin >> matriks[i][j];
            // increment j buat move ke next column
            j++;
        }
        // add newline after each row input for better readability
        cout << endl;
        // increment i buat move ke next row
        i++;
    }

    // simply display hasil matrix
    cout << "Hasil matriks: " << endl;

    // reset i buat mulai display dari row pertama
    i = 0;
    // another while loop buat display rows
    while (i < 2)
    {
        // reset j buat start dari column pertama
        j = 0;
        // nested while loop buat display elements in current row
        while (j < 2)
        {
            // display current element with width 3 biar aligned and neat
            cout << setw(3) << matriks[i][j] << " ";
            // move ke next column
            j++;
        }
        // new line after each row is displayed
        cout << endl;
        // move ke next row
        i++;
    }
    // return 0 to indicate successful program execution
    return 0;
}
