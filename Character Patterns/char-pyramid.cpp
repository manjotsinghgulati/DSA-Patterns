#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i<=n; i++){
            int num = 65;
            for(int j = 1; j<=i; j++){
                char ch = char(num);
                cout << ch;
                num++;
            }
            cout << endl;
        }
}


