#include <iostream>

using namespace std;

class matrix {
    int A[3][3];
    int B[3][3];
    int C[3][3];

   public:
    void readmatrix();
    void displaymatrix();
    void addmmatrix();
};

void matrix::readmatrix() {
    cout << "Add 1st matrix ";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "A[" << i << "][" << j << "] : ";
            cin >> A[i][j];
        }
    }
    cout << "Add 2nd matrix ";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "B[" << i << "][" << j << "] : ";
            cin >> B[i][j];
        }
    }
}

void matrix::displaymatrix() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << " " << C[i][j];
        }
        cout << endl;
    }
}
void matrix::addmmatrix() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    matrix m;
    m.readmatrix();
    m.addmmatrix();
    m.displaymatrix();
    return (0);
}