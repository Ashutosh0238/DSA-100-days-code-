#include <iostream>
#include <string>
using namespace std;

int main() {
    string codeName;
    cin >> codeName;

    int n = codeName.length();
    
    
    int left = 0, right = n - 1;
    while (left < right) {
        char temp = codeName[left];
        codeName[left] = codeName[right];
        codeName[right] = temp;
        left++;
        right--;
    }

    cout << codeName << endl;

    return 0;
}
