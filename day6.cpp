#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) return 0;

    int uniqueIndex = 0; 

    
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    
    for (int i = 0; i <= uniqueIndex; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
