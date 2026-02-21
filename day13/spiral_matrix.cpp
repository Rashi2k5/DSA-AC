#include <bits/stdc++.h>
using namespace std;

void spiral_matrix(int matrix[][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol) {
        // top row
        for (int i = scol; i <= ecol; i++) {
            cout << matrix[srow][i] << " ";
        }

        // right column
        for (int i = srow + 1; i <= erow; i++) {
            cout << matrix[i][ecol] << " ";
        }

        // bottom row (only if srow < erow)
        if (srow < erow) {
            for (int i = ecol - 1; i >= scol; i--) {
                cout << matrix[erow][i] << " ";
            }
        }

        // left column (only if scol < ecol)
        if (scol < ecol) {
            for (int i = erow - 1; i > srow; i--) {
                cout << matrix[i][scol] << " ";
            }
        }

        srow++, scol++;
        erow--, ecol--;
    }
    cout << endl;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiral_matrix(matrix, 4, 4);
}