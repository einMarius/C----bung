#include <iostream>
#include <exception>

using namespace std;

void divide(int a, int b) {
    if(b == 0) throw exception("Teilen durch 0!");

    cout << a/b << endl;
}

int main(int argc, char const *argv[]) {
    
    try {
        divide(10, 5);
    } catch(const exception& e) {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
