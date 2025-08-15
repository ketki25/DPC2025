#include <iostream>
#include <vector>
using namespace std;

void sortnum(vector<int>& arr) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main() {
    vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    int n=8;
    sortnum(arr);
    for (int num : arr) cout << num << " ";
}

