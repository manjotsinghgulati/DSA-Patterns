#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int num = 65;
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                char ch = char(num);
                cout << ch;
                
            }
            num++;
            cout << endl;
        }
}


