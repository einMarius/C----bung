#include <iostream>

using namespace std;

void multiply() {

}

void divide() {
    
}

void add() {
    
}

void subtract() {
    
}

void menu() {
    cout << "Wähle deinen Modus: \n";
    cout << "Addieren: 1\n";
    cout << "Subtrahieren: 2\n";
    cout << "Multiplizieren: 3\n";
    cout << "Dividieren: 4\n";
    cout << "Beenden: q\n";
    cout << endl;

    char input;
    cout << "Modus: ";
    cin >> input;
    cout << endl;


    switch (input) {
    case ('1'):
        
        break;
    case ('2'):
        break;
    case ('3'):
        break;
    case ('4'):
        break;
    case ('q'):
        return;
        break;
    
    default:
        cout << "Input not valid, please try again!\n\n\n";
        break;
    }
}

int main(int argc, char const *argv[]) {
    
    menu();

    return 0;
}
