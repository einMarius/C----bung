#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int number;
    cout << "Gib die Zahl ein: ";
    cin >> number;

    for (size_t i = 1; i <= 10; i++) {
        cout << "[" << i << "] " << i << " * " << number << " = " << i*number << endl;
    }
    

    return 0;
}
