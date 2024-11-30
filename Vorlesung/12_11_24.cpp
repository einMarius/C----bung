#include <iostream>

using namespace std;

string globe ("The golden globe");

void print_hello() {
    string hello ("Hello world!");
    cout << hello << " (with length " << hello.size() << ")" << endl;
}

int main(int argc, char const *argv[]) {
    
    int x (0x41474746);
    int *pointer_x = &x;
    cout << "x: " << x << ", pointer_x: " << pointer_x << endl;
    cout << "sizeof x: " << sizeof(x) << " sizeof pointer_x: " << sizeof(pointer_x) << endl;

    //Kopieren das jz auf nen Char Pointer
    char *pointer_c = (char*) pointer_x;

    for (size_t i = 0; i < sizeof(x); i++) {
        cout << pointer_c[i];
        cout << endl;
    }
    


    /*cout << globe << endl;

    print_hello();

    //auf Heap kann man nur mit "new" allokieren
    string *hi = new string("Welcome to c++!");
    delete(hi);

    cout << *hi << endl;*/

    return EXIT_SUCCESS;
}
