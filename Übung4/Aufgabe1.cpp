#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int feinde = 100;

    unordered_map<int, bool> tueren;

    for (size_t i = 1; i < feinde+1; i++) {
        tueren[i] = true;
    }

    for (size_t i = 0; i < tueren.size(); i+=2) {
        tueren[i] = false;
    }

    for (size_t i = 3; i < 101; i++) {
        for (size_t j = i; j < tueren.size(); j+=i) {
            if(tueren[j] == false) tueren[j] = true;
            else if(tueren[j] == true) tueren[j] = false;
        }   
    }

    int tuerenOffen = 0;
    for (size_t i = 0; i < tueren.size(); i++) {
        if(tueren[i] == true) tuerenOffen++;
    }
    
    cout << tuerenOffen << endl;

    return 0;
}
