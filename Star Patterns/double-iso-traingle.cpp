#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout << "*";
            }
            for(int s = 2*(n-i); s > 0; s--){
                cout << " ";
            }
            for(int j = 1; j<=i; j++){
                cout << "*";
            }
            cout << endl;
            }
        for(int i = n-1; i>0; i--){
            for(int j = i; j>0; j--){
                cout << "*";
            }
            for(int s = 0; s < 2*(n-i); s++){
                    cout << " ";
                }
            for(int j = i; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
}
