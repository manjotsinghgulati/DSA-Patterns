#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
      for(int i = n; i>0; i--){
       
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
        
        for(int i = n; i>0; i--){
            for(int j = 1; j<=(n-i)+1; j++){
                    cout << "*";
                }
                for(int s = 2*(i-1); s >0; s--){
                    cout << " ";
                }
                for(int j = 1; j<=(n-i)+1; j++){
                    cout << "*";
                }
                cout << endl;
        }
}
