#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    
    fstream file("test.txt");

    char input;

    while(file.get(input)) {
        cout << input;
    }

    //--------------------------

    string eierlecken;
    while(getline(file, eierlecken)){
        cout << eierlecken << endl;
    }

    return 0;
}
