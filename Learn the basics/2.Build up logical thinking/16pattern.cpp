/*
Print pattern like this on the cmd
E
D E
C D E
B C D E
A B C D E

*/

#include<iostream>
using namespace std;

int main(){

char ch;
    cout<<"Enter a Character :";
    cin>>ch;

    for(char i=ch;i>='A';i--){
        for(char j=i; j<=ch; j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }

    return 0;
}