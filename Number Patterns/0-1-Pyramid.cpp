#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) { //row
        for (int j = 1; j <= n; j++) { //column
            if (n-j>=i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}


