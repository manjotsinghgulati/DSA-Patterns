#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1, k = n; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout << j << " ";
            }
            for(int s=4*(k-1); s>0; s--){
                cout << " ";
            }
            for(int j = i; j>0; j--){
                cout << j << " ";
            }
        cout << endl;
        k--;
        }
}
