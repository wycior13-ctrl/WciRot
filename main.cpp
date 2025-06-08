// stupid non-sense code
// wycior13-ctrl
#include <iostream>
#include <string>

// table of used characters
char tableLower[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'w', 'x', 'y', 'z'
};

char tableUpper[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
    'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'W', 'X', 'Y', 'Z'
};

const int tableLen = 24;

char rot(char c, int shift)
{
    for (int i = 0; i < tableLen; ++i) {
        const int index = i + shift;
        if (tableLower[i] == c) {
            return tableLower[index % tableLen];
        } else if (tableUpper[i] == c) {
            return tableUpper[index % tableLen];
        }
    }
    return c;
}

int main()
{
    using namespace std;

    string input;
    cout << "give the string: "; // please for the input string
    cin >> input;

    int securenumber; // please for the rot number
    cout << "give the number: ";
    cin >> securenumber;

    string buf(input.length(), ' ');

    for (int i = 0; i < input.length(); ++i) {
        buf[i] = rot(input[i], securenumber);
    }

    cout << buf << "\n";
    return 0;
}
