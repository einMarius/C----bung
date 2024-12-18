#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// warum hier dieses &
int **fillMatrix(fstream &fileStream, int x, int y) {

    // Dynamisches 2D-Array erstellen
    int **matrix = new int *[x];
    for (int i = 0; i < x; ++i) {
        matrix[i] = new int[y];
    }

    for (size_t i = 0; i < x; ++i) {
        for (size_t j = 0; j < y; ++j) {
            fileStream >> matrix[i][j];
        }
    }

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return matrix;
}

bool checkCompability(int y, int a) {
    return (y == a);
}

int main(int argc, char const *argv[]) {

    // erster Wert: Zeilen; zweiter Wert: Anzahl Spalten

    fstream matrix1("matrix1.txt", ios::in);
    fstream matrix2("matrix2.txt", ios::in);
    int x, y;
    int a, b;

    matrix1 >> x >> y;
    int **intMatrix1 = fillMatrix(matrix1, x, y);

    matrix2 >> a >> b;
    int **intMatrix2 = fillMatrix(matrix2, a, b);

    if (!checkCompability(y, a)) {
        cout << "Matrizen sind nicht kompatibel!" << endl;
        return -1;
    }

    // Ziel Matrix erstellt:
    int **zielMatrix = new int *[x];
    for (size_t i = 0; i < x; ++i) {
        zielMatrix[i] = new int[b];
    }

    cout << "----" << endl;

    /*
    Input: Matrix A[m][n], Matrix B[n][p]
    Output: Matrix C[m][p]

    Für i = 0 bis m-1:
        Für j = 0 bis p-1:
            Setze C[i][j] = 0
            Für k = 0 bis n-1:
                C[i][j] += A[i][k] * B[k][j]
    */

   //hatte ab 77 immer wieder falschen Variablen benutzt, ist auch so dahinter geschrieben!

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < b; j++) { // b ist die Spaltenanzahl der zweiten Matrix
            zielMatrix[i][j] = 0;
            for (size_t k = 0; k < y; k++) { // y ist die Spaltenanzahl der ersten Matrix
                zielMatrix[i][j] += intMatrix1[i][k] * intMatrix2[k][j];
            }
        }
    }

    

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < b; j++) { // b ist die Spaltenanzahl der Zielmatrix
            cout << zielMatrix[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
