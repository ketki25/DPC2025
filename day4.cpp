#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n) {
    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            
            swap(arr1[i], arr2[0]);
            
            sort(arr2, arr2 + n);
        }
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = 4, n = 4;

    merge(arr1, arr2, m, n);

    cout << "arr1: ";
    for (int i = 0; i < m; i++) cout << arr1[i] << " ";
    cout << "\narr2: ";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
}
