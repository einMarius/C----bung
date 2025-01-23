#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>

using namespace std;

map<char, int> zaehleZeichen(std::ifstream &input) {
    map<char, int> zeichen;
    string line;

    // Jede Zeile aus dem Eingabestream lesen
    while (getline(input, line)) {
        for (char &c : line) {
            zeichen[c]++;  // Zähler erhöhen (automatisch auf 1, falls Zeichen noch nicht vorhanden)
        }
    }

    return zeichen;
}

std::map<char, int> findTop10(const std::map<char, int>& inputMap) {
    // Verwenden einer multimap, um die Top 10 Elemente zu sortieren
    std::multimap<int, char, std::greater<int>> top10; // Sortiert absteigend nach Werten

    // Durchlaufen der originalen Map und Einfügen in die multimap
    for (const auto& paar : inputMap) {
        top10.insert({paar.second, paar.first});

        // Wenn wir mehr als 10 Elemente haben, das kleinste entfernen
        if (top10.size() > 10) {
            auto it = top10.end();
            --it; // Iterator zum letzten (kleinsten) Element
            top10.erase(it);
        }
    }

    // Konvertieren der multimap zurück zu einer map<char, int> mit den 10 größten Elementen
    std::map<char, int> result;
    for (const auto& paar : top10) {
        result[paar.second] = paar.first;
    }

    return result;
}


int main(int argc, char const *argv[]) {
    
    cout << "Datei: ";
    string inputfile;
    cin >> inputfile;
    
    ifstream input(inputfile);

    if (!input) {
        cerr << "Fehler beim Oeffnen der Datei: " << inputfile << "\n";
        return 1;
    }

    string line;
    map<char, int> zeichen = zaehleZeichen(input);

    /*
    // Ausgabe der sortierten Elemente
    for (const auto& pair : zeichen) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }*/

    auto test = findTop10(zeichen);

    for(const auto& element : test) {
        cout << "Key: " << element.first << ", Value: " << element.second << endl;
    }

    return 0;
}
