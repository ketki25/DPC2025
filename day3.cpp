#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr) {
   
    int a = arr[0];
    int b = arr[0];

    do {
        a = arr[a];           
        b = arr[arr[b]];      
    } while (a != b);

   
    a = arr[0];   
    while (a != b) {
       a = arr[a];   
       b = arr[b];   
    }

    return a;  
}

int main() {
    vector<int> arr = {3, 1, 3, 4, 2};
    cout << "Duplicate number: " << findDuplicate(arr) << endl;
    return 0;
}
