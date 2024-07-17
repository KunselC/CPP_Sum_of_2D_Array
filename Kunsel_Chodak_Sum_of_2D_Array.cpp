#include <iostream>
using namespace std;

int two_d_sum(int arr[][3], int);

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int rows = 2;

    int totalSum = two_d_sum(arr, rows);

    cout << "Sum of all elements: " << totalSum << endl;

    return 0;
}

int two_d_sum(int arr[][3], int rows) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            total += arr[i][j];
        }
    }
    return total;
}