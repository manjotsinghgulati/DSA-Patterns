#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
      int count = 0, temp = n;

        for(int i = 1; i <= (2 * n - 1); i++) {

            for(int j = 1; j <= (2 * n - 1); j++) {

                if(i == 1 || i == (2 * n - 1))

                    cout << n << " ";

                else {

                    if(i > n)

                        count--;

                    else

                        count++;

                    for(int k = 1; k <= count; k++)

                        cout << (n - k + 1) << " ";

                    for(int k = 1; k <= (2 * (n - count) - 1); k++)

                        cout << (i < n ? (n - i + 1) : (i - n + 1)) << " ";

                    for(int k = count; k >= 1; k--)

                        cout << (n - k + 1) << " ";

                    break;

                }

            }

            cout << endl;
        }
}


