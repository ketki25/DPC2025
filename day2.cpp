#include <iostream>
#include <vector>
using namespace std;

int find(vector<int>& arr, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return total - sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};
    int n = arr.size() + 1; 
    cout << "Missing number: " << findMissing(arr, n) << endl;
    return 0;
}
