#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"Enter your age : ";
    cin>>no;

    while(no < 18){
        cout<<"Under age is not Aloud:("<<endl;
        cout<<"Enter age again : ";
        cin>>no;
       
    }

    cout<<"You are good to go !";
}