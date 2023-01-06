#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
        for(int i = n; i>0; i--){
            int num = 65;
            for(int j = i; j>0; j--){
                char ch = char(num);
                cout << ch;
                num++;
            }
            cout << endl;
        }
}


