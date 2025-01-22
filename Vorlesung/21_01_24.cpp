#include <iostream>
#include <sstream>
#include <exception>

using namespace std;

/**
 * Klassen:
 *  private, public, protected
 *  Methoden
 *  Konstruktor
 *  Auslagerung 
 */
class Basis{
    public:
        string toString() {
            return "B";
        }
};

class A : public Basis { //
    public:
        static int value;
        string toString() const;

        void setX(int);

        //Konstruktor:
        A():sz(100), x(new int[sz]) {}; //x wird hier =1 gesetzt
        ~A() { //~ steht für destruktor
            cerr << "Objecte deleted" << endl; 
            if(x) {
                delete [] x; 
                x = nullptr;
            }
        };
    protected: 

    private:
        int *x, sz;
};

string A::toString() const { //so ist es nicht mehr inline!!
    stringstream s;
    s << "this is a: " << x;
    return s.str();
}

void A::setX(int x) {
    this->x[0]=x;
}

/*
oben ist der eigentliche c++ "stil"
class A {
    // diese ganzen Sachen hier sind inline!
    public: //public Bereich
        inline string toString() {
            // damit man dieses x hier ausgeben kann muss man mit einem string stream arbeiten
            stringstream s;
            s << "his is a: " << x;
            return s.str();
        }

        void setX(int x) {
            this->x = x;
        }

    protected: 

    private:
        int x = 0;
};

*/

int main(int argc, char const *argv[]) {
    
    /*
    A *a = new A;

    a->setX(5);
    cout << a->toString() << endl;

    delete a;
    */

    A *a = new A;
    Basis *b = a;

    a->setX(0);

    cout << a->toString() << endl;
    cout << b->toString() << endl;

    delete a;

    return 0;
}


//Exception Handling
/**

int main(int argc, char const *argv[]) {

    struct A {
        char *p;
        bool invalid;
        A() { p = ""; invalid = true; } //Konstruktor
        bool vallid() { return !invalid; }
    } a;

    if(a.vallid())
        cout << a.p << endl;

    return 0;
}
 */

/**
 * Wenn wir einen String bekommen, wir aber einen Int erwarten, wird eine Exception geworfen.
 *
void raise_error() throw(int) {
    throw "-1";
}
* 

int raise_error() noexcept {
    throw exception("passiert");
    return 0;
}

void check_error() {
    try{
        raise_error();
    } catch(exception &ex) {
        cerr << "What is " << ex.what() << endl;
    }catch(...) {
        cerr << "oops" << endl;
        throw;
    }
}

int main(int argc, char const *argv[]) {
    try{
        check_error();
    } catch(...) { 
        cerr << "Allgemeiner Fehler" << endl;
    }

    return 0;
}

*/