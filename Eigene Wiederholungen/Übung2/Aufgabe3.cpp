#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

    while(true) {
        string input;
        getline(cin, input);
        
        if(input.empty()) {
            return 0;
        }

        for(char& c : input) {
            c = toupper(c);
        }

        for (size_t i = input.size(); i > 0; i--) {
            cout << input[i-1];
        }
        cout << endl;
        
    }

    return 0;
}
