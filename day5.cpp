#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;
    int log1[100]; 
    for (int i = 0; i < p; i++) {
        cin >> log1[i];
    }

    int q;
    cin >> q;
    int log2[100]; 
    for (int i = 0; i < q; i++) {
        cin >> log2[i];
    }

    int i = 0, j = 0;

    
    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            cout << log1[i] << " ";
            i++;
        } else {
            cout << log2[j] << " ";
            j++;
        }
    }

    
    while (i < p) {
        cout << log1[i] << " ";
        i++;
    }

    
    while (j < q) {
        cout << log2[j] << " ";
        j++;
    }

    return 0;
}
