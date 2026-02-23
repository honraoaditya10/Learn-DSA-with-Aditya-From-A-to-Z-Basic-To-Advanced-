/*
Print pattern like this on the cmd
12345
1234
123
12
1

*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;

    for(int i=no; i>=1; i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}