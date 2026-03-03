/*
Print pattern like this on the cmd
A
ABA
ABCBA
ABCDCBA

*/

#include<iostream>
using namespace std;
int main(){

     int n = 4;  // Number of rows

    for(int i = 1; i <= n; i++) {
        
        // Print increasing characters
        for(int j = 0; j < i; j++) {
            cout << char('A' + j);
        }

        // Print decreasing characters
        for(int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }
    return 0;
}