#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

    const size_t blockSize = 50; 

    if (argc > 1) {
        return 1;
    }

    string filename;
    cout << "Datei: ";
    cin >> filename;

    ifstream input(filename);

    if (!input) {
        cerr << "Fehler beim Oeffnen der Datei: " << filename << "\n";
        return 1;
    }

    vector<char> buffer (blockSize); //Puffer zum Speichern des gelesenen Blocks
    char destination[10];
    while(input.getline(destination, 50)) {
        cout << destination << "\n";
    }
    cout << endl;

    return 0;
}


/*
Aufgabe b)

int main(int argc, char const *argv[]) {

    if (argc > 1) {
        return 1;
    }

    string filename;
    cout << "Datei: ";
    cin >> filename;

    ifstream input(filename);

    if (!input) {
        cerr << "Fehler beim Oeffnen der Datei: " << filename << "\n";
        return 1;
    }

    string line;
    while(getline(input, line)) {
        cout << line << "\n";
    }

    return 0;
    
}
*/

/*

Aufgabe a)

int main(int argc, char const *argv[]) {

    if (argc > 1) {
        return 1;
    }

    string filename;
    cout << "Datei: ";
    cin >> filename;

    ifstream input(filename);

    if(!input) {
        cerr << "Fehler beim Oeffnen der Datei: " << filename << "\n";
        return 1;
    }

    char zeichen;
    while(input.get(zeichen)) {
        cout << zeichen;
    }
    cout << endl;

    input.close();
    return 0;
}
*/