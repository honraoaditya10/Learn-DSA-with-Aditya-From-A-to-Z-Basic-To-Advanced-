#include<iostream>
using namespace std;

// Print any tabel thta user enter a value

int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    for(int i=1;i<=10;i++){
        cout<<i<<"*"<<no<<"="<<i*no<<endl;
    }
    return 0;
}