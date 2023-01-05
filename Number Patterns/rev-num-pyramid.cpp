#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int num = 1;
        for(int i = n; i>0; i--){
            for(int j = 1; j<=i; j++){
                cout << j << " ";
                
            }
        cout << "\n";
    }

}
