#include "complex.h"

#include <iostream>
#include <sstream>
using namespace std;

ostream& operator<<(ostream& out, const Complex& c){
    if(c.getIm() && c.getRe())
        if(c.getIm() > 0) 
            return out << c.getRe() << '+' << c.getIm() << "i";
        else
            return out << c.getRe() << c.getIm() << "i";

    if(c.getIm()) {
        if(c.getIm() == 1) {
            return out << 'i';
        } else if (c.getIm() == -1) {
            return out << '-i';
        } else 
            return out << c.getIm() << "i";
    } else
        return out << c.getRe();
};

string operator+(const string& s1, const string& s2) {
    stringstream s;
    s << s1 << s2;
    return s.str();
}

//Für R-Wert
string operator+(const string&& s1, const string&& s2) {
    stringstream s;
    s << s1 << s2;
    return s.str();
}

int main(int argc, char const *argv[]) {
    
    Complex a(1, 2), b(2, -3);

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;

    cout << string("A") + string("B") << endl;

    return 0;
}
