#include <iostream>
#include <string>

// Globalna tablica znaków
char table[24] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                  'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'w', 'x', 'y', 'z'};

// Funkcja rot: przesuwa znak str o how pozycji w tablicy table
char rot(char str, int how) {
    int length = 24;
    int index = -1;

    // Znajdujemy indeks znaku w table
    for (int i = 0; i < length; ++i) {
        if (table[i] == str) {
            index = i;
            break;
        }
    }

    // Jeśli znak nie jest w tablicy, zwracamy go bez zmian
    if (index == -1)
        return str;

    // Obliczamy nowy indeks z zawijaniem
    int newIndex = (index + how) % length;
    if (newIndex < 0) newIndex += length; // obsługa ujemnych przesunięć

    return table[newIndex];
}

int main() {
    using namespace std;
    string input;
    cout << "give the string: ";
    cin >> input;

    int securenumber;
    cout << "give the number: ";
    cin >> securenumber;

    long length = input.length();
    if (length <= 0) {
        cout << "Empty string!" << endl;
        return 1;
    }

    string output;
    output.reserve(length);

    int shift = securenumber;

    for (long i = 0; i < length; ++i) {
        if (shift >= 23)
            shift = 1;
        else
            ++shift;

        output.push_back(rot(input[i], shift));
    }

    cout << "Encrypted string: " << output << endl;
    return 0;
}
