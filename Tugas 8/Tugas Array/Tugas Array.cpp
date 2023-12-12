#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

//fungsi untuk menghitung perkalian matriks
void multyplymatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];  // Perbaikan di sini, gunakan indeks k untuk matriks B
            }
        }
    }
}

int main() {
    int baris, kolom, i, j, k, l;
    cout << "Masukan jumlah baris =";
    cin >> baris;
    cout << "Masukan jumlah kolom =";
    cin >> kolom;

    cout << "Masukan Matrik 1" << endl;

    int matriks1[MAX_SIZE][MAX_SIZE];
    int matriks2[MAX_SIZE][MAX_SIZE];
    int matrikst[MAX_SIZE][MAX_SIZE];
    int matriksp[MAX_SIZE][MAX_SIZE];

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << "Masukan Data baris ke- " << i + 1 << " kolom ke- " << j + 1 << "=";
            cin >> matriks1[i][j];
        }
        cout << endl;
    }

    cout << "Masukan Matrik 2" << endl;

    for (k = 0; k < baris; k++) {
        for (l = 0; l < kolom; l++) {
            cout << "Masukan Data baris ke- " << k + 1 << " kolom ke- " << l + 1 << "=";
            cin >> matriks2[k][l];
        }
        cout << endl;
    }

    cout << endl
         << "Matrik yang sudah di input\n";
    cout << "Matrik 1 =" << endl;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << matriks1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Matriks 2 =" << endl;
    for (k = 0; k < baris; k++) {
        for (l = 0; l < kolom; l++) {
            cout << matriks2[k][l] << "\t";
        }
        cout << endl;
    }

    //penjumlahan matriks
    cout << "\nHasil Penjumlahan 2 Matriks" << endl;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            matrikst[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << matrikst[i][j] << "\t";
        }
        cout << endl;
    }

    //pengurangan matriks
    cout << "\nHasil Pengurangan 2 Matriks" << endl;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            matrikst[i][j] = matriks1[i][j] - matriks2[i][j];
            cout << matrikst[i][j] << "\t";
        }
        cout << endl;
    }

    //menghitung perkalian
    multyplymatrices(matriks1, matriks2, matriksp, baris, kolom, kolom);

    //perkalian
    cout << "\nHasil dari Perkalian 2 Matriks" << endl;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << matriksp[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

