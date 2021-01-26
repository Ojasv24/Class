#include <iostream>

using namespace std;

class matrix {
    int rows;

   public:
    void printStarPattern();
};

void matrix::printStarPattern() {
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    matrix p;
    p.printStarPattern();
    return (0);
}