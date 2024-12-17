#include <iostream>
#include <array>
#include <vector>

using namespace std;

struct Person {
    string name;
    int age;

    //-> ist dasselbe wie (*...). oder so
    Person(string name = "Unknown", int age = 7){
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << this->name << " ist " << this->age << " Jahre alt!" << endl;
    }
} v, b;

int main(int argc, char const *argv[]) {

    Person *p = new Person();

    p->name = "Walther";

    // kann auch p->name sein
    cout << (*p).name << endl;

    /*

    vector<double> v {};

    for (size_t i = 0; i < 10; i++) {
        v.push_back((2*i+1) / (100*i+1.0));
    }

    // Durch das & Nutzen wir Referenz, d. h. keine Kopie wird erstellt
    // würden wir x verändern, würden wir dann auch direkt den Wert des Vektors verändern
    // würde man kein & nutzen, würde man eine Kopie erstellen und nicht direkt die Werte des Vektors ändern
    for(double &x : v) {
        cout << x << endl;
    }

    */

    return 0;
}
