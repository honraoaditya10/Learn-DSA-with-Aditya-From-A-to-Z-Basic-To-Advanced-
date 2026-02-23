/*
Print pattern like this on the cmd
A
BB
CCC
DDDD
EEEEE

*/
#include<iostream>
using namespace std;


int main(){
    char ch;
    cout<<"Enter a Character :";
    cin>>ch;

    for(char i='A';i<=ch;i++){
        for(char j='A'; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}