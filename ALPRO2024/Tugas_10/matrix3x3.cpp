#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << "## Program C++ Matriks 3x3 ##" << endl;
  cout << "===============================" << endl;
  cout << endl;
  int matriks[3][3], i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << "Baris " << i + 1 << ", kolom " << j + 1 << " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }

  cout << "Hasil matriks: " << endl;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << setw(3) << matriks[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
