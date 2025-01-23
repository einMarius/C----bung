#include <iostream>
#include <fstream>

using namespace std;

struct Koordinaten {
    double x, y;
    Koordinaten(double x = 0.0, double y = 0.0) {
        this->x = x;
        this->y = y;
    }

    void toString() {
        cout << "Koordinaten: [x = " << x << "], [y = " << y << "]" << endl;
    }

};

int main(int argc, char const *argv[]) {
    
    Koordinaten koordinaten(3.5, 23.4);

    koordinaten.toString();

    return 0;
}
