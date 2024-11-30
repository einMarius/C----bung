#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

    while (true) {
        cout << "Eingabe: ";
        string input;
        getline(cin, input);
        
        if(input.empty()) {
            break;
        }

        //das & bewirkt, dass direkt die Zeichen aus dem "input"-String geändert werden und keine Kopie erstellt wird
        for(char& c : input) {
            c = toupper(c);
        }

        string output;
        for (int i = input.length() - 1; i >= 0; i--) {
            char c = input.back();
            input.pop_back();
            output += c;
        }
        
        cout << output << endl;
    }
    return 0;
}
