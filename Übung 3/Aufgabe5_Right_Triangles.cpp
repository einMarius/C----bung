#include <iostream>

using namespace std;

/**
 * 
 * You are given a n × m field consisting only of periods ('.') and asterisks ('*'). 
 * Your task is to count all right triangles with two sides parallel to the square sides, whose vertices are in the centers of '*'-cells. 
 * A right triangle is a triangle in which one angle is a right angle (that is, a 90 degree angle).
 * 
 * Input
 * The first line contains two positive integer numbers n and m (1 ≤ n, m ≤ 1000). The following n lines consist of m characters each, describing the field. Only '.' and '*' are allowed.
 * 
 * Output
 * Output a single number — total number of square triangles in the field. Please, do not use %lld specificator to read or write 64-bit integers in C++. It is preffered to use cout (also you may use %I64d).
 * 
 */

int main(int argc, char const *argv[]) {

    int a, b;
    cin >> a >> b;

    char field[a][b];
    int row_count[a] = {0};
    int col_count[b] = {0};
    
    // Inputs zum field hinzufügen
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> field[i][j];
        }
    }

    // Zähle Sterne in jeder Zeile und Spalte
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            if(field[i][j] == '*') {
                row_count[i] += 1;
                col_count[j] += 1;
            }
        }
    }
    
    int total_triangles = 0;
    int r = 0;
    int c = 0;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            if(field[i][j] == '*') {
                r = row_count[i]-1; //Sterne in der Reihe außer field[i][j]
                c = col_count[j]-1; //Sterne in der Spalte außer field[i][j]
                total_triangles += r*c;
            }
        }
    }

    cout << total_triangles << endl;

    /*
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cout << field[i][j];
        }
        cout << endl;
    }
    */

    return 0;
}
