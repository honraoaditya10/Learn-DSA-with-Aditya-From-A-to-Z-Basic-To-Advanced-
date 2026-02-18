/*
Print pattern like this on the cmd

*
**
***
****
*****
****
***
**
*

*/
#include<iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter a no : ";
    cin >> no;

    for(int i = 1; i <= 2*no - 1; i++) {

        int star;
        
        if(i <= no)
            star = i;          // Increasing part
        else
            star = 2*no - i;   // Decreasing part

        for(int j = 1; j <= star; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
