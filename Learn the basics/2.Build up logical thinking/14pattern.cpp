/*
Print pattern like this on the cmd
ABCDE
ABCD
ABC
AB
A

*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a Chracter :";
    cin>>ch;

    for(char i=ch;i>='A';i--){
        for(char j='A';j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}