#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[100][100], b[100][100], sum[100][100];

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

   
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
