#include <iostream>

using namespace std;

class Bruch {
    int zaehler;
    int nenner;
    public:
        Bruch(int z = 0, int n = 1) : zaehler(z), nenner(n) {}

    void operator+(Bruch bruch) {
        int n = this->nenner;
        this->zaehler *= bruch.nenner;
        this->nenner *= bruch.nenner;

        bruch.zaehler *= n;

        this->zaehler += bruch.zaehler;
    };

    friend ostream& operator<<(ostream& out, const Bruch& bruch) {
        return out << bruch.zaehler << "/" << bruch.nenner << endl;
    };
};

int main(int argc, char const *argv[]) {
    
    Bruch b1(5, 3);
    Bruch b2(3, 5);

    b1+b2;

    cout << b1 << endl;

    return 0;
}

