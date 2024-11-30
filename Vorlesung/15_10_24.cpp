#include <iostream>

using namespace std;

int main() {

    char c = 65;
    bool b = true;
    short s = 65535;
    int i = 10000000;
    long el = 100000000;
    long long ell = 1000000000000;

    cout << "char: " << c << "\n" 
        << "bool: " << b << "\n"
        << "short: " << s << "\n"
        << "int: " << i << "\n"
        << "el: " << el << "\n"
        << "ell: " << ell << "\n"
        << "Groesse von int: " << sizeof(int)
        << endl;
    return 0;
}