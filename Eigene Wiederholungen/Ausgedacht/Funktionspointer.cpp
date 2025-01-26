#include <iostream>

using namespace std;

void begruessung(string name) {
    cout << "Hallo, " << name << "!" << endl;
}

int main(int argc, char const *argv[]) {
    
    void (*ptr_begruessung)(string name);

    ptr_begruessung = &begruessung;

    ptr_begruessung("Bernhard");

    return 0;
}
