#include <iostream>

using namespace std;

/*struct Name {
    string vorname, nachname;

    Name() {
        vorname = "Marcel";
        nachname = "Bauer";
    }

    void print() {
        cout << vorname << " " << nachname << endl;
    }

};*/

//Bei Struct hat man 16 bytes --> bei union nur noch 8, da entweder double oder int
union Beispiel{
    double t;
    int v;
};

enum Color {RED = 100, PURPLE, BLUE};

// bool next() { return rand(); }

bool next(int x, int y, int z) {
    cout << x << " " << y << " " << z << endl;
    return rand();
};

int main(int argc, char const *argv[]) {
    /*
    Name name;
    name.vorname = "Marcel";
    name.nachname = "Bauer";
    
    //cout << name.vorname << " " << name.nachname << endl;

    */
    /*Name *name = new Name;
    (*name).vorname = "Marcel";
    name->nachname = "Bauer";
    cout << name->vorname << " " << name->nachname << endl;/*
    */

    //(new Name)->print();

    /*
    cout << sizeof(Beispiel) << endl;
    Beispiel real;
    real.t = 10001e-5;
    cout << real.v << " " << real.t << endl;

    double x = 0.10001;
    int y = (int) x;

    //cout << y << " " << x << endl;
    */

   /*
    Color col = RED;
    cout << RED << " " << PURPLE << " " << BLUE << endl; 
    */

    /*
    int a = 1;
    if(int x = a/2) {
        cout << x << endl;
    }

    else cout << (2*x == a) << endl;
    */

    int z = 12, x = 4, y = 2;
    cout << next(z/=x, y*z, x+=y) << endl;

    return 0;
}
