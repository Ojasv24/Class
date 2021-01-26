#include <iostream>

using namespace std;

class matrix {
    int A[3][3];
    int B[3][3];
    int C[3][3] = {0};

   public:
    void readmatrix();
    void displaymatrix();
    void multiplematrix();
};

void matrix::readmatrix() {
    cout << "Add 1st matrix ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> A[i][j];
        }
    }
    cout << "Add 2nd matrix ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> B[i][j];
        }
    }
}

void matrix::displaymatrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << C[i][j];
        }
        cout << endl;
    }
}

void matrix::multiplematrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    matrix m;
    m.readmatrix();
    m.multiplematrix();
    m.displaymatrix();
    return (0);
}