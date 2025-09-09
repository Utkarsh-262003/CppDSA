#include<iostream>
using namespace std;

void add2matrix(int arr[][4], int brr[][4], int ans[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            ans[i][j] = arr[i][j] + brr[i][j];
        }
    }
}

int main() {
    int row = 3, col = 4;
    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int arr2[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int ans[3][4];

    // perform addition
    add2matrix(arr1, arr2, ans, row, col);

    // print result
    cout << "Resultant Matrix:" << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
