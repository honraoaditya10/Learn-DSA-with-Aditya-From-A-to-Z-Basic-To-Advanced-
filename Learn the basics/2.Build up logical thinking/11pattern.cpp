/*
Print pattern like this on the cmd
1
01
101
0101
01010

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 0 : 1;  // Start with 1 for odd rows, 0 for even rows

        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num = (num == 0) ? 1 : 0;   // Toggle between 0 and 1
        }

        cout << endl;
    }

    return 0;
}