/*
Print pattern like this on the cmd
A
AB
ABC
ABCD
ABCDE

*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a Character :";
    cin>>ch;

    for(char i='A';i<=ch;i++){
        for(char j='A';j<=i;j++){
            cout<< j ;
        }
        cout<<endl;
    }
    return 0;
}