#ifndef _BEISPIEL_H_
#define _BEISPIEL_H_

// durch dieses include haben alle unterklassen Zugriff auf toString()
// und generell inkludieren diese string
#include <string>
using namespace std;

class Basis {
    public:
        virtual string toString() const {
            return "Basis";
        }

    friend ostream& operator<< (ostream&, const Basis&);
    friend ostream& operator<< (ostream&, const Basis*);
};

// es weiß nur die Klasse A, dass sie von Basis erbt
class A : public Basis{
    public:
        string toString() const {
            return "A";
        }
};

class B : public Basis{
    public:
        string toString() const {
            return "B";
        }
};

class C : public A, public B {
    public:
        // wenn toString() Methode in mehreren Klassen ist, von der wird erben, muss sie von uns überschrieben werden in der Klasse
        string toString() const {
            return A::toString();
        }
};

#endif // _Beispiel_H_