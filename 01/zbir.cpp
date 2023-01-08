/*
Napisati program za izracunavanje zbira svih elemenata niza n (max. duz. 100)

TODO: napisati funkciju za proveru inputa (cin-a) u header-u koji ces kasnije
include-ovati u buducim programima helpful links:

Helpful links:
https://cplusplus.com/forum/beginner/26821/




*/

#include <iostream>
#define MAX 100

using namespace std;

int main() {

  int max_duzina_niza = 100;
  int duzina_niza;
  int niz[MAX];
  int suma_niza = 0;

  while (true) {
    int i;
    cout << "Unesite zeljenu duzinu niza: (max. je " << MAX << "):  ";
    cin >> duzina_niza;
    if (duzina_niza > max_duzina_niza || duzina_niza < 1)
      break;
    cout << "Izabrana duzina niza je: " << duzina_niza << endl;
    // unos elemenata niza
    cout << "Molim vas unesite elemente niza: " << endl;
    for (i = 0; i < duzina_niza; cin >> niz[i++]) {
      int x = i + 1;
      cout << "niz[" << x << "]: ";
    }
    // unos zavrsen, sada vrsimo sabiranje
    for (i = 0; i < duzina_niza; suma_niza += niz[i++])
      ;
    cout << "Zbir elemenata niza: " << suma_niza << endl << endl;
  }

  return 0;
}