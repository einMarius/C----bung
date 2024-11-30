#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[]) {


    /*double v[100] = {123, 312, 7, 6, 5};

    for (size_t i = 0; i < 100; i++) {

        cout << (i) << ": " << v[i] << ", ";

    }
    cout << endl;
    */


    /*
    for (size_t i = 0; i < argc; i++) {

        cout << argv[i] << endl;

    }

    char *p = argv[0];

    while(*p) cout << *p++ << endl;

    */

    /*
    char **pv = argv;
    while(*pv) cout << *pv++ << endl;

    char *p = argv[0];

    while(*p) cout << *p++ << endl;

    while(*p) cout << *p++ << endl;

    return 0;
    */

    array<int, 5> zahl {1, 2, 3, 4, 5};

    for (size_t i = 0; i < zahl.size(); i++) {
        cout << zahl[i] << endl;
    }

    cout << "---------------" << endl;

    for(int x: zahl) {
        cout << x << endl;
    }
    
}
