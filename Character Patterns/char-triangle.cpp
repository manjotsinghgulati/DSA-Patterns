#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i<=n; i++){
            int num = 65;
            int num2 = 63 + i;
            for(int s = 1; s<=n-1; s++){
                if (n-s>=i) cout << " ";
            }
            
            for(int j = 1; j<=i; j++){
                char ch = char(num);
                cout << ch;
                num++;
            }

            for(int j = 1; j<i; j++){
                char ch = char(num2);
                cout << ch;
                num2--;
            }
            cout << endl;
           
        }
}
